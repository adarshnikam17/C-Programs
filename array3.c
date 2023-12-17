#include<stdio.h>

int main()
{
    int roll_no[100],n,i;
    printf("\n Enter the value of n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
      printf("\n enter the roll no:");
      scanf("%d",&roll_no[i]);
    }
    for ( i = 1; i <= n; i++)
    {
        printf("\n %d",roll_no[i]);
    }
    
    return 0;
}