#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("multiplo de 5\n");
    }
    else
    {
        printf("nao e multiplo de 5\n");
    }
    
    return 0;
}