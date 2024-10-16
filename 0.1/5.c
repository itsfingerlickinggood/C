#include <stdio.h>
#include <math.h>

int main()
{
	int n, isPrime = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n <= 1)
	{
		isPrime = 0;
	}
	else
	{
		int limit = (int)sqrt(n);
		for (int i = 2; i <= limit; i++)
		{
			if (n % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
	}

	if (isPrime)
	{
		printf("%d is a prime number\n", n);
	}
	else
	{
		printf("%d is not a prime number\n", n);
	}

	return 0;
}
