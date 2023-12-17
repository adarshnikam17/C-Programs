#include<stdio.h>
#include<conio.h>

void main()
{
    int temp,a,b;

    printf("\n either the value of a and b");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("\n after swaping the value of a and b");
    printf("\n a=%d b=%d",a,b);

    getch();
}