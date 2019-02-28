#include <stdio.h>

int main()
{
	int a, b;

	printf("Please enter two integers\n");
	scanf_s("%d %d", &a, &b);

	double c = (a + b) / 2.0;

	printf("The average of %d and %d = %f \n", a, b, c);
}