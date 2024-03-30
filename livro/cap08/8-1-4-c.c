#include <stdio.h>
#include <math.h>

int main()

{
    int a, b, n, stop = 0;

    while (!stop)

    {
        scanf("%d", &n);

        if (n >= 1000 && n <= 9999)
        {
            a = n / 100;
            b = n % 100;

            if (pow(a + b, 2) == n)
            {
                printf("propriedade do 3025\n");
            }
            else
            {
                printf("numero normal\n");
            }
        }
        else
        {
            stop = 1;
        }
    }

    return 0;
}
