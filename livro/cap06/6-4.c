#include <stdio.h>

int main()
{
    float x, y, imc;
    scanf("%f%f", &x, &y);
    imc = x / (y * y);
    printf("O IMC e: %.2f\n", imc);
    return 0;
}