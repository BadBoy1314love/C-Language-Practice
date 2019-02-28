#include <stdio.h>

int main()
{
	const double HourlyRate = 8.25;
	const int StandardWorkingTime = 40;
	double Pay = 0.0;
	int TotalWorkingTime;

	printf("Please enter the hours worked:");
	scanf_s("%d", &TotalWorkingTime);
	printf("\n");
	
	if (TotalWorkingTime > StandardWorkingTime)
	{
		Pay = StandardWorkingTime * HourlyRate
			+ (TotalWorkingTime - StandardWorkingTime) 
			* (HourlyRate * 1.5);
	}
	else
	{
		Pay = TotalWorkingTime * HourlyRate;
	}

	printf("Payroll payable:%f\n", Pay);
}