#include<stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	int MAX;

	printf("������������AB���Ƚϴ�С��\nA=");
	scanf_s("%d", &A);
	printf("B=");
	scanf_s("%d", &B);
	
	if (A > B)
	{
		MAX = A;
		printf("��ϴ����ΪA=%d", MAX);
	}
	else
	{
		if (A == B)
		{
			MAX = A = B;
			printf("û�нϴ��������ΪAB�������,ֵΪ%d",MAX);
		}
		else
		{
			MAX = B;
			printf("��ϴ����ΪB=%d", MAX);
		}
	}

	return 0;
}