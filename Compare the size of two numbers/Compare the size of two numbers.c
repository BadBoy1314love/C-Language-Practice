#include<stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	int MAX;

	printf("Please enter two Numbers A and B for comparison£º\nA=");
	scanf_s("%d", &A);
	printf("B=");
	scanf_s("%d", &B);
	
	if (A > B)
	{
		MAX = A;
		printf("The larger number is A=%d", MAX);
	}
	else
	{
		if (A == B)
		{
			MAX = A = B;
			printf("There is no larger number, because A and B are equal and the value is %d",MAX);
		}
		else
		{
			MAX = B;
			printf("The larger number is B=%d", MAX);
		}
	}

	return 0;
}
