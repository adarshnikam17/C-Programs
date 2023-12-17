#include<stdio.h>


int main()
{
    int num=0;
    
    printf("Enter a number ");
    scanf("%d",&num);

    if (num%2==0)
    {
      printf("%d is Even",num);
    }
    else
    {
      printf("%d id Odd",num);
    }
 return 0;

}