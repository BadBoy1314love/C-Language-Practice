#include <stdio.h>

int main()
{
	int x;

	printf("�����붨�ڽ��\n");
	scanf_s("%d", &x);

	double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);

	printf("��Ϣ�ϼ�%f", amount);
}
