#include <stdio.h>

int main()
{
    int n, contador = 2, primo = 1;

    scanf("%d", &n);

    while (n / 2 >= contador && primo)
    {
        if (n % contador == 0)
        {
            primo = 0;

            printf("%d", contador);
        }
        else
        {
            contador += 1;
        }
    }
    return 0;
}
