#include <stdio.h>

int main()
{
    int hour;

    scanf("%d", &hour);

    if (hour < 6 || hour >= 18)
    {
        printf("escuro\n");
    }

    return 0;
}