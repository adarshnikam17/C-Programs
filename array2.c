#include <stdio.h>

int main()

{
    int marks[2][4] = {{45, 23, 2, 3}, {3, 2, 3, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            printf("%d", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}