#include<stdio.h>
void star pattern (introws);
{

    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j <= i; j++)
    {
        printf("*");
    }
        printf("\n");
    }

}

int main()
{
    int rows;
    printf("Enter 0 for star pattern\n");
    scanf("%d",&rows);

    printf("How many rows do you want\n");
    scanf("%d",&rows);

    

return 0;

}
