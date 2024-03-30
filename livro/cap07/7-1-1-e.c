#include <stdio.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if (idade % 2 == 0)
    {
        printf("O numero digitado e par.\nO dobro do numero e: %d.\nA metade do numero digitado e: %d.\n", 2 * idade, idade / 2);
    }
    
    return 0;
}