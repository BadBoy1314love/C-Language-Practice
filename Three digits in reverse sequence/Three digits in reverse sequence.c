#include<stdio.h>

int main()
{
	int Number;

	printf("请输入一个三位数：");
	scanf_s("%d", &Number);
	
	int A = Number / 100;
	int B = Number / 10 % 10;
	int C = Number % 10;
	int InvertedNumber = C * 100 + B * 10 + A * 1;

	printf("则倒序三位数为%d",InvertedNumber);
}