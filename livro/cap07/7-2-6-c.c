#include <stdio.h>

int main()
{
    float valor;

    scanf("%f", &valor);

    if (valor <= 500)
    {
        printf("0\n");
    }

    if (valor > 500)
    {
        printf("%.2f", (valor - 500) / 2);
    }

    return 0;
}