#include <stdio.h>

int factorial(int n)
{
    int P = 1;

    for (int i = n; i >= 1; i -= 1) {
        P *= i;
    }

    return P;
}

int main()
{
    int n;

    scanf("%d!", &n);

    printf("%d", factorial(n));

    return 0;
}