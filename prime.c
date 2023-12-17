#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = 2;

    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            printf("Given number is not a prime number.");
            break;
        }
        i++;
        if (i == num)
        {
            printf("%d is prime number.", num);
        }
    }
    return 0;
}