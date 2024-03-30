#include <stdio.h>

int main()
{
    float salario;

    scanf("%f", &salario);

    if (salario <= 2000)
    {
        salario = salario * 1.20;
    }
    else if (salario > 2000 && salario <= 2100)
    {
        salario = salario * 1.18;
    }
    else if (salario > 2100 && salario <= 5000)
    {
        salario = salario * 1.15;
    }
    else if (salario > 5000 && salario < 8000)
    {
        salario = salario * 1.12;
    }
    else
    {
        salario = salario * 1.10;
    }

    printf("%.2f", salario);

    return 0;
}