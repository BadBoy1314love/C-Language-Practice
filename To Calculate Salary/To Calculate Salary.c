#include <stdio.h>

int main()
{
	const double HourlyRate = 8.25;
	const int StandardWorkingTime = 40;
	double Pay = 0.0;
	int TotalWorkingTime;

	printf("�����빤����Сʱ����");
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

	printf("Ӧ�����ʣ�%f\n", Pay);
}