#include<stdio.h>

int main()
{
    int n,r;
    int rev=0;
    printf("\n Enter the value of n");
    scanf("%d",&n);

    while (n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("\n Reverse no is =%d is",rev);

    return 0;
    
}