#include<stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;

	printf("��������ʼʱ�䣺");
	scanf_s("%d %d", &hour1, &minute1);
	printf("��������ֹʱ�䣺");
	scanf_s("%d %d", &hour2, &minute2);

	int Hour = hour2 - hour1;
	int Minute = minute2 - minute1;

	if (Minute < 0)     //�����Minute<0����ô��ִ�д���������䣩
	{
		Minute = 60 + Minute;
		Hour--;
	}

	printf("��ʱ�����%dСʱ%d��", Hour, Minute);
}
