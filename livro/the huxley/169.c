#include <stdio.h>

#define MAX 500

int main()
{
    char frase[MAX + 1];

    fgets(frase, MAX + 1, stdin);

    int i = 0, count = 0;

    while (frase[i] != '\0') {
        if (frase[i] != '\n') {
            count += 1;
        }
        i += 1;
    }

    printf("%d\n", count);

    return 0;
}