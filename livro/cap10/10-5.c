#include <stdio.h>
#include <math.h>

float media(float a[], int tam) //calculate simple media
{
    int i;
    float sum = 0, m;

    for (i = 0; i < tam; i += 1) {
        sum += a[i];
    }

    m = sum / tam;

    return m;
}

float variance(float a[], int tam) //calculate variance
{
    int i;
    float sum = 0;
    float m = media(a, tam), var; //declaring variables for media and variance
    float k;

    for (i = 0; i < tam; i += 1) {
        k = pow((a[i] - m), 2);
        sum += k;
    }

    var = sum / tam;

    return var;
}

float deviation(float a[], int tam) //calculate the deviation
{
    return sqrt(variance(a, tam));
}

int main()
{
    int n;
    int i;

    printf("Insert N: ");
    scanf("%d", &n);

    float numbers[n];
    float desvio;

    for (i = 0; i < n; i += 1) {
        scanf("%f", &numbers[i]);
    }

    desvio = deviation(numbers, n);

    printf("%f", desvio);

    return 0;
}