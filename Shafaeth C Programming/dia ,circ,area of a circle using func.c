#include <stdio.h>
float Diameter(float radius);
float Circumference(float radius);
float Area(float radius);


int main()
{
    float radius, dia, circ, area;
        printf("Enter radius of circle: ");
    scanf("%f", &radius);

    dia  = Diameter(radius);
    circ = Circumference(radius);
    area = Area(radius);

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}



float Diameter(float radius)
{
    return (2 * radius);
}


float Circumference(float radius)
{
    return (2 * 3.1416 * radius);
}

float Area(float radius)
{
    return (3.1416 * radius * radius);
}
