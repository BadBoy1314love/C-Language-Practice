/*
A BCD number is a two-digit decimal number in one byte,
with four bits for each digit.So if the hexadecimal of a BCD number is 0x12,
it represents decimal 12. But XiaoMing has not learned BCD,
so all BCD Numbers are converted to decimal output as binary Numbers.
So BCD 0x12 is written as decimal 18!Now, 
your program will read in the wrong decimal number and output the correct
decimal number.Tip: you can convert 18 back to 0x12 and then back to 12.
*/

#include <stdio.h> 

int main()
{
	int Number;
	printf("Please enter an integer within the range of (0-153) :");
	scanf_s("%d", &Number);

	int A = Number / 16;
	int B = Number % 16;
	int C = A * 10 + B * 1;

	printf("Then the corrected number is %d", C);
}

/*
int main()
{
	int x;
	scanf_s("%d",&x);
	printf("%x", x);
}
*/