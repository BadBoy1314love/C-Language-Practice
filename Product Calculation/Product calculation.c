#include <stdio.h>

int main()
{
	const int AMOUNT = 100;
	int price = 0;

	printf("Please enter the amount (yuan)£º");
	scanf("%d", &price);

	int change = AMOUNT - price;

	printf("Change %d yuan.\n", change);

	return 0;
}


