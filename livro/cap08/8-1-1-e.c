#include <stdio.h>

int main()
{
    int a, b, contador = 1;

    scanf("%d%d", &a, &b);

    while (a + contador < b)
    {
        printf("%d\n", a + contador);

        contador += 1;
    }

    return 0;
}