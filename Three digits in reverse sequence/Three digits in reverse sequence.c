#include<stdio.h>

int main()
{
	int Number;

	printf("������һ����λ����");
	scanf_s("%d", &Number);
	
	int A = Number / 100;
	int B = Number / 10 % 10;
	int C = Number % 10;
	int InvertedNumber = C * 100 + B * 10 + A * 1;

	printf("������λ��Ϊ%d",InvertedNumber);
}