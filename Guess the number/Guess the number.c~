#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;

	printf("I have a number between one and one hundred\n");

	do 
	{
		printf("Please guess the number between one and one hundred:");
		scanf_s("%d", &a);
		count++;
		if (a > number)
		{
			printf("Your guess is bigger\n");
		}
		else
		{
			if(a<number)
			{
				printf("Your guess is smaller\n");
			}
		}
	} while (a!=number);

	printf("Great. You guessed it %d times\n", count);
}