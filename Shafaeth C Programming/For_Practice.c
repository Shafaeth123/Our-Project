#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define WIDTH 40
#define HEIGHT 20
#define PACMAN 'C'
#define WALL '#'
#define FOOD '.'
#define DEMON 'X'
#define EMPTY ' '

int pacman_x, pacman_y;
char board[HEIGHT][WIDTH];
int score = 0;
int food = 0;
int res = 0;
int highScore = 0;
int demonCount = 0;
int wallCount = 0;

// Function to initialize the game board based on difficulty level
void initialize() {
    int level;
    score = 0;
    food = 0;
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || j == 0 || i == HEIGHT - 1 || j == WIDTH - 1) {
                board[i][j] = WALL;
            } else {
                board[i][j] = EMPTY;
            }
        }
    }

    // Adjust wall and demon count based on difficulty level
    switch (level) {
        case 1: // Easy
            wallCount = 30;
            demonCount = 2;
            break;
        case 2: // Medium
            wallCount = 40;
            demonCount = 5;
            break;
        case 3: // Hard
            wallCount = 50;
            demonCount = 10;
            break;
        default:
            wallCount = 30;
            demonCount = 2;
    }

    for (int count = 50; count!= 0; count--) {
        int i =( rand() % (HEIGHT+1));
        int j = (rand() % (WIDTH +1));
        if (board[i][j] != WALL && board[i][j] != PACMAN) {
            board[i][j] = WALL;
        }
    }
int val = 5; 
    while (val--) { 
        int row = (rand() % (HEIGHT + 1)); 
        for (int j = 3; j < WIDTH - 3; j++) { 
            if (board[row][j] != WALL 
                && board[row][j] != PACMAN) { 
                board[row][j] = WALL; 
            } 
        } 
    } 
   for (int i = 0; i < HEIGHT; i++) { 
        for (int j = 0; j < WIDTH; j++) { 
            if (i % 2 == 0 && j % 2 == 0 && board[i][j] != WALL && board[i][j] != DEMON  && board[i][j] != PACMAN) { 
  
                board[i][j] = FOOD; 
                food++; 
            } 
        } 
   }
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (board[i][j] == EMPTY) {
                // Avoid placing food on walls or demons
                if (rand() % 10 < 3) {  // Control density of food
                    board[i][j] = FOOD;
                    food++;
                }
            }
    }
  
    }
    pacman_x = HEIGHT / 2;
    pacman_y = WIDTH / 2;
    board[pacman_x][pacman_y] = PACMAN;
}

// Function to draw the board
void draw() {
    system("cls");
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

// Function to move Pac-Man
void movePacman(int dx, int dy) {
    int new_x = pacman_x + dx;
    int new_y = pacman_y + dy;

    if (board[new_x][new_y] != WALL) {
        if (board[new_x][new_y] == FOOD) {
            score++;
            food--;
            if (food == 0) {
                res = 2;
                return;
            }
        } else if (board[new_x][new_y] == DEMON) {
            res = 1;
        }

        board[pacman_x][pacman_y] = EMPTY;
        pacman_x = new_x;
        pacman_y = new_y;
        board[pacman_x][pacman_y] = PACMAN;
    }
}

// Function to load the high score
void loadHighScore() {
    FILE *file = fopen("highscore.txt", "r");
    if (file) {
        fscanf(file, "%d", &highScore);
        fclose(file);
    }
}

// Function to save the high score
void saveHighScore() {
    FILE *file = fopen("highscore.txt", "w");
    if (file) {
        fprintf(file, "%d", highScore);
        fclose(file);
    }
}

// Main function
int main() {
    loadHighScore();

    int level;
    printf("Select difficulty level:\n1. Easy\n2. Medium\n3. Hard\n4.");
    printf("Enter your choice (1-3): ");
    scanf("%d", &level);

    initialize();

    printf("Use W (up), S (down), A (left), D (right). Press Q to quit.\n");
    printf("Press any key to start!\n");
    getch();

    while (1) {
        draw();

        char input = getch();

        switch (input) {
            case 'w': movePacman(-1, 0); break;
            case 's': movePacman(1, 0); break;
            case 'a': movePacman(0, -1); break;
            case 'd': movePacman(0, 1); break;
            case 'q':
                printf("Game Over! Final Score: %d\n", score);
                return 0;
        }

        if (res == 1) {
            printf("Game Over! Caught by a Demon!\nYour Score: %d\n", score);
            break;
        }
        if (res == 2) {
            printf("You Win! Your Score: %d\n", score);
            break;
        }
    }

    if (score > highScore) {
        highScore = score;
        printf("New High Score! %d\n", highScore);
        saveHighScore();
    } else {
        printf("High Score: %d\n", highScore);
    }
    return 0;
}
