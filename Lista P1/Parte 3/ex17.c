#include <stdio.h>

void troca(int x, int y) {

    int temp;

    temp = x;
    x = y;
    y = temp;

}

int main ()
{
    int a = 1, b = 2;

    printf("a,b: %d,%d\n", a, b);

    troca(&a, &b);

    printf("a,b: %d,%d\n", a, b);

    return 0;
}