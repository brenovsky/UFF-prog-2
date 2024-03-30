#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    printf("Maior: %d\n", maior(x, y));

    return 0;
}