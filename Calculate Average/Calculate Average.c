/*
#include <stdio.h>

int main()
{
	int a, b;

	printf("Please enter two integers\n");
	scanf_s("%d %d", &a, &b);

	double c = (a + b) / 2.0;

	printf("The average of %d and %d = %f \n", a, b, c);
}
*/

#include <stdio.h>

int main()
{
	int number;
	int sum=0;
	int count=0;

	printf("please enter numbers:");
	scanf_s("%d", &number);

	while (number != -1)
	{
		sum += number;
		count++;
		scanf_s("%d", &number);
	}

	printf("The average value is %f\n",1.0*sum / count);

	return 0;
}

