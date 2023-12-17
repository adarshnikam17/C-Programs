#include <stdio.h>
#include <conio.h>
void main()
{
    int bs, ta, da, hra, ts;
    
    printf("Enter The Basic Salary");
    scanf("%d", &bs);

    ta = bs * 10 / 100;
    da = bs * 15 / 100;
    hra = bs * 20 / 100;
    ts = bs + ta + da + hra;

    printf("total salary is=%d", ts);
    getch();
}