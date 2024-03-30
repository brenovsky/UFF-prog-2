#include <stdio.h>

int maior2(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    int a[10], x, i;
    int contador = 0;

    for (i = 0; i < 10; i += 1) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < 10; i += 1) {
        if (x == a[i]) {
            contador += 1;
        }
    }

    printf("%d apareceu %d \n", x, contador);

    int maior = maior2(a[0], a[1]);
    int index = 0;

    for (i = 2; i < 10; i += 1) {
        maior = maior2(maior, a[i]);
    }


    for (i = 0; i < 10; i += 1) {
        if (maior == a[i]) {
            break;
        }
        index += 1;
    }

    printf("O maior e: %d e seu indice e: %d", maior, index);

    return 0;
}