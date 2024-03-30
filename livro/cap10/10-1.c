#include <stdio.h>

int main()
{
    int a[10], x, i;
    int contador = 0;

    for (i = 0; i < 10; i += 1) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < 10; i += 1) {
        if (x == a[i]) {
            contador += 1;
        }
    }

    printf("%d apareceu %d vezes", x, contador);

    return 0;
}