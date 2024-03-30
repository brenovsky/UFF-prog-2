#include <stdio.h>

int main()
{
    int n, contador;

    scanf("%d", &n);

    if (n % 2 != 0) {
        n -= 1;
    }

    for (contador = 2; contador <= n; contador += 2) {
        printf("%d\n", contador);
    }

    return 0;
}