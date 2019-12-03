#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("Please enter the start time (please use 24H system)\n");
	scanf("%d %d",&hour1, &minute1);
	printf("Please enter the termination time (please use 24H system)\n");
	scanf("%d %d",&hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;

	printf("Time difference is %d hours %d minutes",t / 60, t % 60);
}
