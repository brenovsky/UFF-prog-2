#include <stdio.h>

float maior2(float x, float y)
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
    float a[10];
    int i, j;
    float temp;

    for (i = 0; i < 10; i += 1) {
        scanf("%f", &a[i]);
    }

    //bubble sort

    for (i = 0; i < 10; i += 1) {
        for (j = 0; j < 9; j += 1) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i += 1) {
        printf("%f\n", a[i]);
    }

    return 0;
}