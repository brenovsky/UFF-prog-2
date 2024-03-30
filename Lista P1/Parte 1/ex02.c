#include <stdio.h>
int main()
{
	float x, y, z, media;
	scanf("%f%f%f", &x, &y, &z);
	media = (x + y + z) / 3;
	printf("A media e: %.3f\n", media);
	return 0;
}