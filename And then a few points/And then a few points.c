#include<stdio.h>

int main()
{
	int StartTime;
	int SpendTime;

	printf("Please enter the starting time (in 1106 for 11:06) :");
	scanf_s("%d",&StartTime);
	printf("Please enter the time spent (in minutes) :");
	scanf_s("%d",&SpendTime);

	int TimeMin = ((StartTime / 100 * 60) + (StartTime % 100)) + SpendTime;

	printf("Termination time is %d:%d", TimeMin / 60, TimeMin % 60);
}