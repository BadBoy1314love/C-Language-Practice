#include <stdio.h>

int main()
{
	int x;

	printf("Please enter a regular amount\n");
	scanf("%d", &x);

	double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);

	printf("Total principal and interest %f yuan", amount);
}
