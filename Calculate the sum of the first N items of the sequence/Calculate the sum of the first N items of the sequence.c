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
