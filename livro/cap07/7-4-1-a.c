#include <stdio.h>

int main()
{
    float salario;

    scanf("%f", &salario);

    if (salario <= 1000)
    {
        salario = salario * 1.15;
    }
    else if (salario > 1000 && salario <= 2000)
    {
        salario = salario * 1.10;
    }
    else {
        salario = salario * 1.05;
    }

    printf("%.21f", salario);

    return 0;
}