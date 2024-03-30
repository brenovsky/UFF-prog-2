#include <stdio.h>

int main()
{
    int produto, qntd;
    float preco_1 = 5.30;
    float preco_2 = 6.00;
    float preco_3 = 3.20;
    float preco_4 = 2.50;
    float valor;

    scanf("%d%d", &produto, &qntd);

    if (produto == 1)
    {
        valor = preco_1 * qntd;

        if (qntd >= 15 || valor >= 40)
        {
            valor = 0.85 * valor;
        }
        else
        {
            printf("Sem desconto!\nPreco: R$%.2f", valor);
        }
    }

    else if (produto == 2)
    {
        valor = preco_2 * qntd;

        if (qntd >= 15 || valor >= 40)
        {
            valor = 0.85 * valor;
        }
        else
        {
            printf("Sem desconto!\nPreco: R$%.2f", valor);
        }
    }

    else if (produto == 3)
    {
        valor = preco_3 * qntd;

        if (qntd >= 15 || valor >= 40)
        {
            valor = 0.85 * valor;
        }
        else
        {
            printf("Sem desconto!\nPreco: R$%.2f", valor);
        }
    }

    else if (produto == 4)
    {
        valor = preco_4 * qntd;

        if (qntd >= 15 || valor >= 40)
        {
            valor = 0.85 * valor;
        }
        else
        {
            printf("Sem desconto!\nPreco: R$%.2f", valor);
        }
    }
    
    else
    {
        printf("Produto invalido!\n");
    }

    printf("Desconto!\nPreco novo: RS%.2f\n", valor);

    return 0;
}