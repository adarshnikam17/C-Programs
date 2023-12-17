#include <stdio.h>
int main()
{
    int a = 18;
    float b = 7.7;
    void *ptr;
    ptr = &a;
    printf("The Value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The Value of b is %f\n", *((float *)ptr));
    

    return 0;
}