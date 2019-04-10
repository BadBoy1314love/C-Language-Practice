#include <stdio.h>

int main()
{
	int Number;
	int Factorial=1;
	int Initial=1;

	printf("please enter a number:");
	scanf_s("%d", &Number);

	while (Initial <= Number)
	{
		Factorial *= Initial;
		Initial++;
	}

	printf("%d!=%d", Number, Factorial);

	return 0;
}