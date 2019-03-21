#include<stdio.h>

int main()
{
	int LowerFahrenheit;
	int UpperFahrenheit;
	double C = 0;

	printf("Please enter the lower Fahrenheit value:");
	scanf_s("%d", &LowerFahrenheit);
	
	printf("Please enter the upper Fahrenheit value:");
	scanf_s("%d", &UpperFahrenheit);

	if ((LowerFahrenheit <= UpperFahrenheit)&& (UpperFahrenheit<= 100))
	{
		while ((LowerFahrenheit <= UpperFahrenheit) && (UpperFahrenheit <= 100))
		{
			printf("F=%d C=%.1lf\n",LowerFahrenheit,C=5*(LowerFahrenheit-32)/9);
			LowerFahrenheit = LowerFahrenheit + 2;
		}
	}
	else
	{
		printf("Invalid\n");
	}

	return 0;
}