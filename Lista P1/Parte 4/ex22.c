#include <stdio.h>

int main() {
    int i;
    int numbers[10];
    int soma = 0;
    double media;

    for (i = 0; i < 10; i += 1) {

        scanf("%d", &numbers[i]);

        soma += numbers[i];
    }

    media = soma * 0.1;

    printf("Media: %.1f\n", media);

    for (i = 0; i < 10; i += 1) {
        printf("-> %d/%.1f = %.2f\n", numbers[i], media, numbers[i] / media);
    }

    printf("%d", numbers[0]);
    for (i = 1; i < 10; i += 1) {
        printf(", %d", numbers[i]);
    }
    printf(".");

    return 0;
}