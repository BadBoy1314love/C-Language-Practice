#include <stdio.h>

int main()
{
	printf("Please enter a real number X\n");
	double x=0.0;
	scanf_s("%lf", &x);

	if (x != 0)
	{
		double X = 1 / x;
		printf("f(%.1lf)=%.1lf", x, X);
	}
	else
		if (x = 0)
		{
			double X = 1 / x;
			printf("f(%.1lf)=%.1lf", x, X);
		}
}