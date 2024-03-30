#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int espaco = n - 1; //espaco para contar o recuo

    while (espaco >= 0) {

        for (i = espaco; i >= 0; i -= 1) {
            printf(" ");
        }

        printf("*\n");

        espaco -= 1;
    }

    return 0;
}

//não terminado