#include<stdio.h>

int main()

{
int marks[10], sum=0;
printf("Enter marks of 10 students /n/n");

for (int i = 0; i <= 9; i++)
{
printf ("marks of %d student",i+1);
scanf("%d",&marks[i]);
sum+= marks[i];
}
int average = sum/10;
printf("/n the average marks of students are %d",average);
return 0;

}