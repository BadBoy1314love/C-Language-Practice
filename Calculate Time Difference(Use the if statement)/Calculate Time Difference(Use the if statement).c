#include<stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("Please enter the start time:");
	scanf_s("%d %d", &hour1, &minute1);
	printf("Please enter the termination time:");
	scanf_s("%d %d", &hour2, &minute2);

	int Hour = hour2 - hour1;
	int Minute = minute2 - minute1;

	if (Minute < 0)     //If (Minute<0, then execute the statement inside the braces)
	{
		Minute = 60 + Minute;
		Hour--;
	}

	printf("Then the time difference is %d hours %d minutes", Hour, Minute);
}


