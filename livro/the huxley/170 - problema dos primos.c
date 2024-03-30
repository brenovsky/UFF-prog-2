#include <stdio.h>
#include <math.h>


int primo(int n)
{
    if (n <= 0 || n == 1 ) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    for (int i = 2; i < sqrt(n) + 1; i += 1) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (primo(a) && primo(b) && primo(c) && primo(d)) {
        printf("%d", a * b * c * d);
    }

    else {
        printf("SEM PRODUTO");
    }

    return 0;
}