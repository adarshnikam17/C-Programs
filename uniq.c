#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);

    if(y%4==0){
        printf("Leap year");
    }
    else
    {
        printf("not leap year");
    }
    return 0;
}