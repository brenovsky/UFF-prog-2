#include <stdio.h>

void even_numbers(int n[], int len)
{
    int i;

    for (i = 0; i < len; i += 1) {
        if (n[i] % 2 == 0) {
            printf("Par: %d\n", n[i]);
        }
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i += 1) {
        scanf("%d", &a[i]);
    }

    even_numbers(a, n);

    return 0;
}