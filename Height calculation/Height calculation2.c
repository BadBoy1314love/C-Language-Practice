#include<stdio.h>

int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��\n"
		   "������ 5 7 ��ʾ5Ӣ��7Ӣ��\n");
	
	double foot;
	double inch;

	scanf_s("%lf %lf", &foot, &inch);

	printf("�����%f�ס�\n", ((foot + inch /12) * 0.3048));

	return 0;
}