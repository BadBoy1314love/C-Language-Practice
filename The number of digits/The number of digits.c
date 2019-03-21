#include<stdio.h>

int main()
{
	int Number;
	int Digit = 0;

	printf("Please enter a real number:");
	scanf_s("%d", &Number);   //789

	Digit++;                  //0-------->1
	Number /= 10;             //78

	while (Number > 0)                             //7                        
	{
		Digit++;              //1--------->2       //2--------->3
		Number /= 10;         //7=========>        
	}

	printf("The number of digits in the number is %d", Digit);

	return 0;
}