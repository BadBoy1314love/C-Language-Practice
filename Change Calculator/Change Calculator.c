#include<stdio.h>

int main()
{
	int Price = 0;
	int Bill = 0;

	printf("��������Ʒ��");
	scanf_s("%d", &Price);
	printf("������Ʊ�棺");
	scanf_s("%d", &Bill);

	if (Bill >= Price)
	{
		printf("Ӧ������%dԪ", Bill - Price);
	}
	else
	{
		printf("���Ǯ����,����%dԪ",Price-Bill);
	}

	return 0;
}
