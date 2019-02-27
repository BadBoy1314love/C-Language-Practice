#include <stdio.h>

int main()
{
	int a, b;

	printf("请输入两个整数\n");
	scanf_s("%d %d", &a, &b);

	double c = (a + b) / 2.0;

	printf("%d与%d的平均值=%f\n", a, b, c);
}