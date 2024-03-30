#include <stdio.h>

int main()
{
    int n, incremento, contador;

    scanf("%d%d", &n, &incremento);

    for (contador = 0; contador <= n; contador += incremento) {
        printf("%d\n", contador);
    }

    return 0;
}