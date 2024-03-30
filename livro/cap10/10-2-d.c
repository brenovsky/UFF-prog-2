#include <stdio.h>

int main()
{
    float a[10];
    int i;

    for (i = 0; i < 10; i += 1) {
        scanf("%f", &a[i]);
    }

    for (i = 0; i < 10; i += 1) {
        if (i % 2 == 0) {
            printf("%f\n", a[i]);
        }
    }

    return 0;
}