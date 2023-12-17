#include<stdio.h>

int main()
{
    int l,i;
    int a[10];
    printf("Enter a element of array:");
    scanf("%d",&a[i]);
    i=0;
   l=a[i];
   while(i<0)
   {
    if(l<a[i])
    l=a[i]; 
    i++;
   }
   printf("\n %d is large number:",l);
    return 0;
}