#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("请输入起始时间(请使用24H制)\n");
	scanf_s("%d %d",&hour1, &minute1);
	printf("请输入终止时间(请使用24H制)\n");
	scanf_s("%d %d",&hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;

	printf("时间差是%d小时%d分钟", t / 60, t % 60);
}
