#include<stdio.h>

void swap (int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void main()
{
    int r=10,v=15;
    swap(r,v);

    printf("\n value of r:%d",r);
    printf("\n value of v:%d",v);

}