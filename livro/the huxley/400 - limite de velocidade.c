#include <stdio.h>

float calculaMulta(int velocity)
{
    if (velocity <= 50) {
        return 0;
    }
    else if (velocity > 50 && velocity <= 1.1 * 50) {
        return 230;
    }
    else if (velocity > 1.1 * 50 && velocity <= 1.2 * 50) {
        return 340;
    }

    return (velocity - 50) * 19.28;
}

int main()
{
    int velocity;
    float multa;

    scanf("%d", &velocity);

    multa = calculaMulta(velocity);

    printf("%.2f", multa);

    return 0;
}