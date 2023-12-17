#include<stdio.h>

int main()

{
int num;
printf("enter the number you want multiplication table of:\n");
scanf("%d", &num);

printf("multiplication table of %d as follows:\n",num);
int i;
for(i = 1; i <= 10; i++)
{
printf("%d x %d = %d\n",num,i, num*i);

}
return 0;


}