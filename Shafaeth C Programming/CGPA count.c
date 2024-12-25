#include <stdio.h>

int main() {
    float cr1, cr2, cr3, cr4;
    float total_cr;
    float gp1, gp2, gp3, gp4;
    float total_gp;
    float CGPA;


    printf("Enter your credits and grade points for course 1: ");
    scanf("%f %f", &cr1, &gp1);

    printf("Enter your credits and grade points for course 2: ");
    scanf("%f %f", &cr2, &gp2);

    printf("Enter your credits and grade points for course 3: ");
    scanf("%f %f", &cr3, &gp3);

    printf("Enter your credits and grade points for course 4: ");
    scanf("%f %f", &cr4, &gp4);


    total_cr = cr1 + cr2 + cr3 + cr4;
    total_gp = (cr1 * gp1) + (cr2 * gp2) + (cr3 * gp3) + (cr4 * gp4);


    CGPA = total_gp / total_cr;
    printf("Your CGPA is: %.2f\n", CGPA);


    if (CGPA == 4.00) {
        printf("A+");
    } else if (CGPA >= 3.75) {
        printf("A");
    } else if (CGPA >= 3.50) {
        printf("A-");
    } else if (CGPA >= 3.25) {
        printf("B+");
    } else if (CGPA >= 3.00) {
        printf("B");
    } else if (CGPA >= 2.75) {
        printf("B-");
    } else if (CGPA >= 2.50) {
        printf("C+");
    } else if (CGPA >= 2.25) {
        printf("C");
    } else {
        printf("F");
    }

    return 0;
}
