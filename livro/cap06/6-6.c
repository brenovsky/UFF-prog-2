#include <stdio.h>

int main()
{
    float base, altura, area;
    scanf("%f%f", &base, &altura);
    area = (base * altura) / 2;
    printf("A area e: %f\n", area);
    return 0;
}