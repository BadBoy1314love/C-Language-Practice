/*
#include<stdio.h>

int main()
{
	int Number;
	int Digit = 0;

	printf("Please enter a real number:");
	scanf("%d", &Number);  
               
	Number /= 10;
	Digit++;

	while (Number > 0)                                                 
	{             
		Number /= 10; 
		Digit++;        
	}

	printf("The number of digits in the number is %d", Digit);

	return 0;
}
*/

#include<stdio.h>

int main()
{
	int Number;
	int Digit = 0;

	printf("Please enter a real number:");
	scanf("%d", &Number);

	do
	{
		Number /= 10;
		Digit++;
	} while (Number > 0);

	printf("The number of digits in the number is %d", Digit);

	return 0;
}
