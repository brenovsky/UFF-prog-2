#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = n; i >= 1; i -= 1) {
        for (j = 0; j < n; j += 1) {
            printf("%d ", n + j);
        }
        printf("\n");

        n -= 1;
    }

    return 0;
}