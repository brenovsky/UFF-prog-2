#include <stdio.h>

int main()
{
    int n, contador = 0;

    scanf("%d", &n);

    while (contador < 2 * n)
    {
        printf("Eu adoro programar\n");

        contador += 1;
    }

    return 0;
}