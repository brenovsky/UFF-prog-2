#include <stdio.h>
int main()
{
	int x, y, z, q, r;
	scanf("%d%d", &x, &y);
	q = x / y;
	r = x % y;
	printf("Quociente inteiro: %d e Resto: %d", q, r);
	return 0;
}