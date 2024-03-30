#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i == 1; i <= n; i += 1) {
        for (j = 0; j < i; j += 1) {
            printf("*");
        }
        printf("\n");
    }

    for (i == n - 2; i > 1; i -= 1) { //for das linhas (n - 2 para descontar a linha adicional de n asteriscos)
        for (j = i - 2; j > 0; j -= 1) { // for das colunas (i - 2 para descontar uma linha, que é a de n asteriscos)
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
