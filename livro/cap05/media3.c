#include <stdio.h>
int main ()
{
	float x, y, z, media;
	scanf("%f%f%f", &x, &y, &z);
	media = (x + y + z) / 3;
	printf("A média calculada é: %f\n", media);
	return 0;
}