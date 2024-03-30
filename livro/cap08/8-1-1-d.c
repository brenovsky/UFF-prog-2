#include <stdio.h>

int main()
{
    int n = 20, contador = 1;

    while (contador <= n)
    {
        if (contador % 2 != 0)
        {
            printf("%d\n", contador);
        }
        
        contador += 1;
    }

    return 0;
}