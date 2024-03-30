#include <stdio.h>

int main()
{
    int a, b, c;
    int tipo = 0;

    scanf("%d%d%d", &a, &b, &c);

    if (b == a && b == c)
    {
        tipo = 1;
    }
    else if ((b == a) ^ (b == c) ^ (a == c))
    {
        tipo = 3;
    }
    else
    {
        tipo = 2;
    }

    printf("%d\n", tipo);

    return 0;
}