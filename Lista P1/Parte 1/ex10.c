#include <stdio.h>

int main()
{
    int n, contador;

    scanf("%d", &n);

    for (contador = 0; contador <= n; contador += 1) {
        printf("%d\n", contador);
    }

    return 0;
}