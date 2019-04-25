/*
#include <stdio.h>

int main()
{
	int Number;

	for (Number = 1; Number <= 100; Number++)
	{
		int i;
		int Prime = 1;
		for (i = 2; i < Number; i++)
		{
			if (Number % i == 0)
			{
				Prime = 0;
				break;
			}
		}
		if (Prime == 1)
		{
			printf("%d is a prime number\n", Number);
		}
		else
		{
			printf("%d is not a prime number\n", Number);
		}
	}
	return 0;
}
*/

#include <stdio.h>

int main()
{
	int number;
	int count = 0;

	number = 1;

	while (count < 50)
	{
		int i;
		int prime = 1;
		for (i = 2; i < number; i++)
		{
			if (number % i == 0)
			{
				prime = 0;
				break;
			}
		}
		if (prime == 1)
		{
			count++;
			printf("%d\t", number);
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
		number++;
	}
	return 0;
}