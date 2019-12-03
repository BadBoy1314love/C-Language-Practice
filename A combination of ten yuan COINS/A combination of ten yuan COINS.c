/*#include <stdio.h>

int main()
{
	int x;
	int one, two, five;

	//printf("please enter a number(yuan):");
	//scanf("%d", &x);

	x = 10;
	int exit=0;

	for (one = 1; one < x * 10; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five = 1; five < x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("%d*(1 jiao)+%d*(2 jiao)+%d*(5 jiao)=%d(yuan)\n",
						one, two, five, x);
					exit = 1;
					break;
				}
			}
			if (exit == 1) { break; }
		}if (exit == 1) { break; }
	}

	return 0;
}
*/

#include <stdio.h>

int main()
{
	int x;
	int one, two, five;

	printf("please enter a number(yuan):");
	scanf("%d", &x);

	for (one = 1; one < x * 10; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five = 1; five < x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("%d*(1 jiao)+%d*(2 jiao)+%d*(5 jiao)=%d(yuan)\n",
						one, two, five, x);
					goto out;
				}
			}
		}
	}
	out:

	return 0;
}
