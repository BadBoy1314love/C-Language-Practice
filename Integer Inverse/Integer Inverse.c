#include <stdio.h>

int main()
{
	int x;
	int digit;
	int result=0;

	printf("Please enter a integer number:");
	scanf_s("%d", &x);

	while (x > 0)
	{
		digit = x % 10;
		//printf("%d", digit);
		result = result * 10 + digit;
		x /= 10;
	}

	printf("The value of the reverse integer is %d", result);
}