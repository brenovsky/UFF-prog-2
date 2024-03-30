#include <stdio.h>

int main()
{
    int valor, troco;
    scanf("%d", &valor);
    troco = valor % 7;
    printf("O troco e: %d reais\n", troco);
    return 0;
}