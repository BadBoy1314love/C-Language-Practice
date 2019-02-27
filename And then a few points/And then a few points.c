#include<stdio.h>

int main()
{
	int StartTime;
	int SpendTime;

	printf("请输入起始时间（格式如1106表示11点零6分）：");
	scanf_s("%d",&StartTime);
	printf("请输入花费时间（单位分钟）：");
	scanf_s("%d",&SpendTime);

	int TimeMin = ((StartTime / 100 * 60) + (StartTime % 100)) + SpendTime;

	printf("则终止时间为%d时%d分", TimeMin / 60, TimeMin % 60);
}