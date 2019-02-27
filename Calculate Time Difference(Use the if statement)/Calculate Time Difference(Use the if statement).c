#include<stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("请输入起始时间：");
	scanf_s("%d %d", &hour1, &minute1);
	printf("请输入终止时间：");
	scanf_s("%d %d", &hour2, &minute2);

	int Hour = hour2 - hour1;
	int Minute = minute2 - minute1;

	if (Minute < 0)     //如果（Minute<0，那么则执行大括号内语句）
	{
		Minute = 60 + Minute;
		Hour--;
	}

	printf("则时间差是%d小时%d分", Hour, Minute);
}
