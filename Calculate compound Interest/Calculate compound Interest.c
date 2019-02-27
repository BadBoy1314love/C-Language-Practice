#include <stdio.h>

int main()
{
	int x;

	printf("请输入定期金额\n");
	scanf_s("%d", &x);

	double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);

	printf("本息合计%f", amount);
}
