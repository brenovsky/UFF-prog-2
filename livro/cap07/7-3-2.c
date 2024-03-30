#include <stdio.h>

int main()
{
    int a, b, c, menor;

    scanf("%d%d%d", &a, &b, &c);

    menor = a;

    if (menor > b)
    {
        menor = b;
    }
    if (menor > c)
    {
        menor = c;
    }
    
    printf("%d", menor);

    return 0;
}