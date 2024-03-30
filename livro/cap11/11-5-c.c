#include <stdio.h>

#define tam 9

int main()
{
    char frase[tam + 1];
    char reverso[tam + 1];

    fgets(frase, tam + 1, stdin);

    for (int i = tam; i > 0; i -= 1) {
        reverso[tam - i] = frase[i - 1];
    }

    reverso[tam] = '\0';

    puts(reverso);

    return 0;
}