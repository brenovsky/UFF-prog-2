#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    float v[n], soma = 0, media;

    for (i = 0; i < n; i += 1) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    printf("A media e: %.2f\n", media);

    for (i = 0; i < n; i += 1) {
        printf("%.2f\n", v[i]);
    }

    return 0;
}