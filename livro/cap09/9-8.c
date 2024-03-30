#include <stdio.h>

void triangle(int n)
{
    for (int i = 1; i <= n; i += 1) {
        for (int j = 0; j < i; j += 1) {
            printf("%d", i);
        }

        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    triangle(n);

    return 0;
}