#include<stdio.h>
int main()
{
  int a[5],i;
  printf("Enter the elements:");
  for(i=0; i<5; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("reverse array is:");
  for(i=4;i>=0; i--)
  printf("%d ",a[i]);
}
