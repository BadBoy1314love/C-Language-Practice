#include<stdio.h>

int main()
{
	int StartTime;
	int SpendTime;

	printf("��������ʼʱ�䣨��ʽ��1106��ʾ11����6�֣���");
	scanf_s("%d",&StartTime);
	printf("�����뻨��ʱ�䣨��λ���ӣ���");
	scanf_s("%d",&SpendTime);

	int TimeMin = ((StartTime / 100 * 60) + (StartTime % 100)) + SpendTime;

	printf("����ֹʱ��Ϊ%dʱ%d��", TimeMin / 60, TimeMin % 60);
}