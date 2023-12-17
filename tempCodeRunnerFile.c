#include <stdio.h>
#include <conio.h>

void main()
{
    int s1, s2, s3, s4, s5, total;
    float avg;
    clrscr();

    printf("\n enter the five sub marks");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    printf("\n total marks=%d", total);

    avg = total / 5;
    printf("\n average=%.2f", avg);
    getch();
}