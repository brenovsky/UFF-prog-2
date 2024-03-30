#include <stdio.h>

int main()
{
    int N, diferenca;
    int saldo = 0;

    scanf("%d", &N);

    if (N > 100)
    {
        diferenca = N - 100;
        N -= diferenca;

        saldo += diferenca * 5;
    }
    
    if (N > 30)
    {
        diferenca = N - 30;
        N -= diferenca;

        saldo += diferenca * 2;
    }

    if (N > 10)
    {
        diferenca = N - 10;
        N -= diferenca;

        saldo += diferenca;
    }

    printf("R$%d\n", saldo + 7);

    return 0;
}