#include <stdio.h>

int main()
{
    long int N;

    scanf("%ld", &N);

    long int Q = 0;
    int fator = 9;
    int contador = 1;

    while (N > 1 && fator > 1) {
        if (N % fator == 0) {
            Q += fator * contador;
            N = N / fator;
            contador *= 10;
        }
        else {
            fator -= 1;
        }
    }

    printf("%ld", Q);

    return 0;
}