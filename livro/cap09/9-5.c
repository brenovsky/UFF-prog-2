//encontrar o maior entre 3 inteiros

#include <stdio.h>

int maior2(int x, int y)
{
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int maior3(int x, int y, int z)
{
    return maior2(maior2(x, y), z);
}

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    printf("%d\n", maior3(a, b, c));

    return 0;
}