for (int val = 5; val != 0; val--) { 
        int i = rand() % HEIGHT;
        for (int j = 3; j < WIDTH - 3; j++) { 
            if (board[i][j] == EMPTY) {  
                board[i][j] = WALL;
            }
        }