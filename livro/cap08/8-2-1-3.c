#include <stdio.h>

int main()
{
    int a, b, contador;

    scanf("%d%d", &a, &b);

    if (a % 2 != 0) {
        a += 1;
    }

    for (contador = a; contador <= b; contador += 2) {
        printf("%d\n", contador);
    }

    return 0;
}