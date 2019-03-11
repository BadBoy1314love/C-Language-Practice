/*
#include <stdio.h>

int main()
{
	printf("Please enter a real number X\n");
	double x=0.0;
	scanf_s("%lf", &x);

	if (x != 0)
	{
		double X = 1 / x;
		printf("f(%.1lf)=%.1lf\n", x, X);
	}
	else
		if (x == 0)
		{
			printf("f(0.0)=0.0\n");
		}
}
*/

#include<stdio.h>
#include<math.h>

int main()
{
	double x = 0;

	printf("Please enter a real number:");
	scanf_s("%lf", &x);

	if ((x > 0) || (x == 0))
	{
		printf("f(%.2lf)=%.2lf", x, pow(x, 0.5));
	}
	else
	{
		if (x < 0)
		{
			printf("f(%.2lf)=%.2lf", x, (x + 1) * sqrt(2) + 2 * x + 1 / x);
		}
	}
}