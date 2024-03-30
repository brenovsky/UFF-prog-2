//convert celsius to fahrenheit

#include <stdio.h>

float celsius_to_fahreinheit(float temp)
{
    return 32 + (1.8 * temp);
}

int main()
{
    float temperature;

    scanf("%f", &temperature);

    printf("%.2f\n", celsius_to_fahreinheit(temperature));

    return 0;
}