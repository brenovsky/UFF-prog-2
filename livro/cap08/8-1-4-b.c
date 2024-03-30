#include <stdio.h>

int main()
{
    int a, b, n;

    scanf("%d%d", &a, &b);

    n = a;

    while (n <= b)
    {
        if (n % 2 != 0)
        {
        printf("%d\n", n);
        }

        n += 1;
    }

    return 0;
}