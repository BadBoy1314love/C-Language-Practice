#include<stdio.h>

int main()
{
	int Price = 0;
	int Bill = 0;

	printf("请输入商品金额：");
	scanf_s("%d", &Price);
	printf("请输入票面：");
	scanf_s("%d", &Bill);

	if (Bill >= Price)
	{
		printf("应该找零%d元", Bill - Price);
	}
	else
	{
		printf("你的钱不够,还差%d元",Price-Bill);
	}

	return 0;
}
