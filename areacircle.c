#include <stdio.h>
#include <conio.h>

void main()
{
    float rad, area;
    //clrscr();

    printf("\n Enter the value of radius");
    scanf("%f", &rad);

    area = 3.14 * rad * rad;
    printf("\n Area of circle =%.2f", area);

    getch();
}