#include <stdio.h>
int main()
{
        int a, b, choice;

        printf("Enter your choice\n");
        printf("1.Addition\n2. Subtraction\n3. Multiplication\n4.Division\n");
        scanf("%d", &choice);

        if (choice > 4)
        {
                printf("select with in the range!\n");
        }
        else
        {
                printf("Enter 2 integer numbers\n");
                scanf("%d %d", &a, &b);
        }

        switch (choice)
        {
        case 1:
                printf("%d + %d = %d\n", (a + b));
                break;
        case 2:
                printf("%d + %d =%d\n", (a - b));
                break;
        case 3:
                printf("%d * %d =%d\n", (a * b));
                break;
        case 4:
                if (b != 0)
                {
                        printf("%d / %d =%d\n", (a / b));
                }
                else
                {
                        printf("Number can not be divide by 0\n");
                        break;
                }

        default:
                printf("You enterd wrong choice\n");
        }

        return 0;
}