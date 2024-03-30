#include <stdio.h>

int chamadas = 0;

void hanoi(int n, char O, char T, char D)
{
    chamadas++;
    if (n == 1) {
        printf("Disco 1: %c -> %c", O, D);
    }

    hanoi(n - 1, O, D, T);
    printf("\n Disco %d: %c -> %c", n, O, D);
    hanoi(n - 1, T, O, D);
}

int main()
{
    int n; //numero de discos

    scanf("%d", &n);

    hanoi(n, 'O', 'D', 'T'); // origem, destino, trabalho

    printf("\n\n%d\n\n", chamadas);

    return 0;
}


//ver busca binária
//ver merge sort
