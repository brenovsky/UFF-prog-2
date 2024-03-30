#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    if (a != b) 
    {
        printf("Sao diferentes!\n");
    }
    else
    {
        printf("Sao iguais!\n");
    }

    return 0;
}