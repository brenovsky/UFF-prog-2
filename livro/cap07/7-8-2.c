#include <stdio.h>

int main()
{
    float v_veiculo, v_via;
    
    scanf("%f", &v_veiculo);
    scanf("%f", &v_via);

    if (v_veiculo <= v_via)
    {
        printf("Esta dentro dos limites");
    }
    else
    {
        float multa = 0;
        int pontos = 0;

        if (v_veiculo > v_via && v_veiculo <= 1.2 * v_via)
        {
            multa = 85.13;
            pontos = 4;

            printf("Multa: R$%.2f\nPontos: %d", multa, pontos);
        }
        else if (v_veiculo > 1.2 * v_via && v_veiculo <= 1.5 * v_via)
        {
            multa = 127.69;
            pontos = 5;

            printf("Multa: R$%.2f\nPontos: %d", multa, pontos);
        }
        else
        {
            multa = 574.62;
            pontos = 7;

            printf("Multa: R$%.2f\nPontos: %d\nSua carteira foi apreendida e suspensa!", multa, pontos);
        }
    }

    return 0;
}