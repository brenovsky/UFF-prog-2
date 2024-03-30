#include <stdio.h>
int main()
{
	float x, y, c;
	scanf("%f%f", &x, &y);
	c = x / y;
	printf("O consumo medio foi %.3f km/L", c);
	return 0;
}