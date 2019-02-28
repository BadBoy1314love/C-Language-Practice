#include<stdio.h>

int main()
{
	int Price = 0;
	int Bill = 0;

	printf("Please enter the item amount£º");
	scanf_s("%d", &Price);
	printf("Please enter the bill£º");
	scanf_s("%d", &Bill);

	if (Bill >= Price)
	{
		printf("The change of %d yuan", Bill - Price);
	}
	else
	{
		printf("You don't have enough money. You still need %d yuan",Price-Bill);
	}

	return 0;
}