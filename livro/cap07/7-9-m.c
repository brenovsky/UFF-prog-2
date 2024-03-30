#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (b == a && b == c)
    {
        printf("equilatero\n");
    }

    else if ((a == b) ^ (b == c) ^ (a == c))
    {
        printf("isosceles\n");
    }

    else
    {
        printf("escaleno\n");
    }

    return 0;
}