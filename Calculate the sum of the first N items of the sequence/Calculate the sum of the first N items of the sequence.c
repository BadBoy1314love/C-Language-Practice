/*
Calculate sequence 1 + 1/2 + 1/3 +... The sum of the first N terms

#include<stdio.h>

int main()
{
	double Sum = 0;
	double N = 0;
	int Number;

	printf("Please enter a positive integer : ");
	scanf_s("%d", &Number);

	while (N < Number)
	{
		N++;
		Sum = Sum + 1 / N;
	}

	printf("The value of the sum of the first N terms of the sequence is %.6lf", Sum);
}
*/

/*
#include<stdio.h>

int main()
{
	double Sum = 0.0;
	double N = 1;
	int Number;

	printf("Please enter a positive integer : ");
	scanf_s("%d", &Number);

	while (N <= Number)
	{
		Sum += 1 / N;
		N += 2;
	}

	printf("The value of the sum of the first N terms of the sequence is %.6lf", Sum);
}
*/

/*
#include <stdio.h>  //f(n)=1+1/2+1/3+1/4+1/5......+1/n

int main()
{
	int number;
	int i;
	double sum = 0.0;

	printf("please enter a number:");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
	{
		sum += 1.0 / i;
	}

	printf("f(%d)=%f\n", number, sum);
}
*/

/*
#include <stdio.h>   //f(n)=1-1/2+1/3-1/4+1/5......+1/n

int main()
{
	int number;
	int i;
	double sum = 0.0;
	int sign = 1;

	printf("please enter a number:");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
	{
		sum += sign * 1.0 / i;
		sign = -sign;
	}

	printf("f(%d)=%f\n", number, sum);

	return 0;
}
*/

#include <stdio.h>

int main()
{
	int number;
	int i;
	double sum = 0.0;
	double sign = 1.0;

	printf("please enter a number:");
	scanf_s("%d", &number);

	for (i = 1; i <= number; i++)
	{
		sum += sign / i;
		sign = -sign;
	}

	printf("f(%d)=%f\n", number, sum);

	return 0;
}