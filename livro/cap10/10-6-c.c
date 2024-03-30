#include <stdio.h>

void reversed(char a[], int len)
{
    int i;
    char b[len];

    for (i = len; i >= 0; i -= 1) {
        b[len - i] = a[i - 1];
    }

    for (i = 0; i < len; i += 1) {
        printf("-> %c\n", b[i]);
    }
}

int main()
{
    int i, n;

    scanf("%d", &n);

    while (getchar() != '\n');

    char a[n];

    for (i = 0; i < n; i += 1) {
        scanf(" %c", &a[i]);
    }

    reversed(a, n);
}