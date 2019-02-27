#include <stdio.h>

int main()
{
	const double HourlyRate = 8.25;
	const int StandardWorkingTime = 40;
	double Pay = 0.0;
	int TotalWorkingTime;

	printf("请输入工作的小时数：");
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

	printf("应付工资：%f\n", Pay);
}