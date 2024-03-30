#include <stdio.h>

void trocar(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    int a, b;
    a = 5, b = 3;

    trocar(&a,&b); //passa o endereço, para os ponteiros x e y conseguirem acessar o valor

    printf("a=%d, b=%d\n", a, b);

    return 0;
}