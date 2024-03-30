#include <stdio.h>

float greater2(float x, float y)
{
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    int n = 5;
    int i;

    float numbers[n];

    for (i = 0; i < n; i += 1) {
        scanf("%f", &numbers[i]);
    }

    float greater = greater2(numbers[0], numbers[1]);

    for (i = 2; i < n; i += 1) {
        greater = greater2(greater, numbers[i]);
    }

    printf("Maior: %f\n", greater);

    for (i = 0; i < n; i += 1) {
        printf("-> %f/%f = %f\n", numbers[i], greater, numbers[i] / greater);
    }

    printf("%f", numbers[0]);
    for (i = 1; i < n; i += 1) {
        printf(", %f", numbers[i]);
    }
    printf(".\n");

    return 0;
}