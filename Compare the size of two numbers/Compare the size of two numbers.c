#include<stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	int MAX;

	printf("请输入两个数AB来比较大小：\nA=");
	scanf_s("%d", &A);
	printf("B=");
	scanf_s("%d", &B);
	
	if (A > B)
	{
		MAX = A;
		printf("则较大的数为A=%d", MAX);
	}
	else
	{
		if (A == B)
		{
			MAX = A = B;
			printf("没有较大的数，因为AB两数相等,值为%d",MAX);
		}
		else
		{
			MAX = B;
			printf("则较大的数为B=%d", MAX);
		}
	}

	return 0;
}