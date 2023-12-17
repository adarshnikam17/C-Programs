#include<stdio.h>
#include<conio.h>

void main()
{
    float p,r,y,si,totalamount;

    printf("\n Enter Principle Amount");
    scanf("%f",&p);

    printf("\n Enter Rate of Intrest");
    scanf("%f",&r);

    printf("\n Enter Number of Years");
    scanf("%f",&y);

    si=(p*r*y)/100;
    printf("\n Simple Intrest=%.2f",si);

    totalamount=p+si;

    printf("\n total amount=%.2f",totalamount);

    getch();


}
