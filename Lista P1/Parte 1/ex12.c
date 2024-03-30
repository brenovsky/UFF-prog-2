#include <stdio.h>

int main()
{
    int n, contador;

    scanf("%d\n", &n);

    if (n <= 100) {
        if (n % 2 != 0) {
            n += 1;
        }

        for (contador = n; contador <= 100; contador += 2) {
            printf("%d\n", contador);
        }
    }

    else {
        if (n % 2 != 0) {
            n -= 1;
        }

        for (contador = 100; contador <= n; contador += 2) {
            printf("%d\n", contador);
        }
    }

    return 0;
}