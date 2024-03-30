#include <stdio.h>
int main()
{
	int a, b, minutos;
	scanf("%d%d", &a, &b);
	minutos = a * 60 + b;
	printf("Se passaram %d minutos\n", minutos);
	return 0;
}