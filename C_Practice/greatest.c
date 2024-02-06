#include <stdio.h>
int main()
{
	float x, y, z;
	printf("Enter three numbers for finding max using only if statement\n");
	scanf("%f%f%f", &x, &y, &z);

	if (x >= y && x >= z)
		printf("%f is the greatest of three\n", x);
	if (y >= x && y >= z)
		printf("%f is the greatest of three\n", y);
	if (z >= x && z >= y)
		printf("%f is the greatest of three\n", z);
	return 0;
}
