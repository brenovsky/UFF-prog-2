#include <stdio.h>

int somaDigito(int n)
{

    int algarismo;
    int soma = 0;

    while (n != 0) {
        algarismo = n % 10;
        soma += algarismo;
        n = (n - algarismo) / 10;
    }

    return soma;
}

int main()
{
    int n, resultado;

    scanf("%d", &n);

    resultado = somaDigito(n);

    printf("%d", resultado);

    return 0;
}