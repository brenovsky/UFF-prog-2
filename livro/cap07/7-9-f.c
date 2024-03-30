#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    if (A + B + C == 1 || A + B + C == 2)
    {
        if (A + B == 2 || A + B == 0)
        {
            printf("C\n");
        }
        else if (A + C == 2 || A + C == 0)
        {
            printf("B\n");
        }
        else
        {
            printf("A\n");
        }
    }
    else
    {
        printf("*");
    }

    return 0;
}