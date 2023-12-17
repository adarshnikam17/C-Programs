#include <stdio.h>
int main()
{
    int a = 17;
    int *ptr = NULL;

    if (ptr != NULL)
    {
        printf("the address of a is %d\n", ptr);
    }
    else
    {
        printf("the pointer is a NULL pointer and cannot be dereferenced");
    }

    return 0;
}