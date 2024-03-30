#include <stdio.h>

void trocar(int x, int y)
{
    int aux = x;
    x = y;
    y = aux;
}

int main()
{
    int a, b;
    a = 5, b = 3;

    trocar(a,b); //quando termina a função, x e y só deixam de existir (código incorreto)

    printf("a=%d, b=%d\n", a, b);

    return 0;
}