#include<stdio.h>

int main()
{
    int n,i,tab;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        tab=n*i;
        printf("%d\n",tab);
    }
}