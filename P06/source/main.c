#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int n);

int main(void)
{
	int number = 5;
	printf("The oringinal value of number is %d", number);

	number = cubeByValue(number);

	printf("\nThe new value of number is %d\n", number);
	return 0;
}

int cubeByValue(int n)
{
	return n * n* n;
}