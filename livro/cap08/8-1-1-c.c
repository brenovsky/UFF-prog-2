#include <stdio.h>

int main()
{
    int n = 20, contador = 0;

    while (contador < n)
    {
        printf("%d\n", n - contador);

        contador += 1;
    }

    return 0;
}