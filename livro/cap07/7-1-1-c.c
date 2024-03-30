#include <stdio.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("menor de idade\n");
    }
    
    return 0;
}