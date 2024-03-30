#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d/%d + %d/%d", &a, &b, &c, &d);

    if (b == 0 || d == 0)
    {
        printf("entrada invalida!\n");
    }
    else if (b == d)
    {
        printf("%d/%d", a + c, b);
    }
    else
    {
        printf("%d/%d", (a * d) + (b * c), b * d);
    }

    return 0;
}