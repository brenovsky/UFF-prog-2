#include <stdio.h>

int main()
{
    int F, I;
    int soma = 0;

    scanf("%d%d", &F, &I);

    if (F >= 150 && I >= 12)
    {
        soma += 1;
    }

    if (F >= 140 && I >= 14)
    {
        soma +=1 ;
    }

    if (F >= 170 && I >= 16)
    {
        soma += 1;
    } 

    printf("%d\n", soma);

    return 0;
}