#include <stdio.h>

int main()
{
    int n, divisor = 2;
    int primo = 1;

    scanf("%d", &n);

    while ((n / 2) >= divisor && primo)
    {
        if (n % divisor == 0)
        {
            primo = 0;
        }

        else
        {
            divisor += 1;
        }
    }

    printf("%d", primo);

    return 0;
}