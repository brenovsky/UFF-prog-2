#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d e par\n", a);
    }
    else
    {
        printf("%d e impar\n", a);
    }
}