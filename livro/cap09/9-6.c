//calcular a area do circulo

#include <stdio.h>
#include <math.h>

float area(float radius)
{
    return M_PI * pow(radius, 2);
}

int main()
{
    float r;

    scanf("%f", &r);

    printf("%.2f\n", area(r));

    return 0;
}