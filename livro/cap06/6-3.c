#include <stdio.h>

int main()
{
	float a, b, c, k;
	float eq1, eq2, eq3, eq4;
	
	scanf("%f%f%f%f", &a, &b, &c);
	
	k = (a * b * c);
	eq1 = (a * b) / c;
	eq2 = (a * a) + b + (5 * c);
	eq3 = k + b + ((5 * c) / 3) - 1;
	eq4 = (k * k * k) / 2;
	
	printf("%f\n%f\n%f\n%f\n", eq1, eq2, eq3, eq4);
	return 0;
}