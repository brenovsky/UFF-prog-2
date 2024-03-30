#include <stdio.h>
#include <string.h>

float calculaHospedagem(char tipo[], int dias)
{
    float valor;

    if (strcmp(tipo, "individual") == 0) {
        if (dias >= 3) {
            valor = (125 * dias) * 0.85;
            return valor;
        }
        return 125 * dias;
    }

    if (strcmp(tipo, "duplo") == 0) {
        if (dias >= 3) {
            valor = (140 * dias) * 0.85;
            return valor;
        }
        return 140 * dias;
    }

    if (strcmp(tipo, "triplo") == 0) {
        if (dias >= 3) {
            valor = (180 * dias) * 0.85;
            return valor;
        }
        return 180 * dias;
    }
}

int main()
{
    char tipo[10];
    int dias;
    float preco;

    scanf("%s\n", &tipo);
    scanf("%d", &dias);

    preco = calculaHospedagem(tipo, dias);

    printf("%.2f", preco);

    return 0;
}