#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\n Enter a value if a, b and c");
    scanf("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("\n a is greater");
    }
    if (b>c && b>a)
    {
        printf("\n b is greater");
    }
    if (c>a && c>b)
    {
        printf("\n c is greater");
    }
    
    return 0;

}