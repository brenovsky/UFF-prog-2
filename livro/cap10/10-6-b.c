#include <stdio.h>

int vogals(char a[], int n) {

    int i, count = 0;

    for (i = 0; i < n; i += 1) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
           count += 1;
        }
    }

    return count;
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

    printf("Vogais: %d", vogals(a, n));

    return 0;
}