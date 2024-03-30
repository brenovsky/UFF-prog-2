#include <stdio.h>

void ordem(int* a, int* b, int*c) {
    int temp;

    if (*a >= *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b >= *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a >= *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

}

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    printf("Input: %d - %d - %d\n", x, y, z);

    ordem(&x, &y, &z);

    printf("Ordenado: %d - %d - %d\n", x, y, z);

    return 0;
}