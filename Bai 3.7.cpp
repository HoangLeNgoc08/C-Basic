#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void factorize(int n)
{
	while(n > 1)
	{
		for(int i = 2 ; i <= n ; i++)
		{
			while (n % i == 0 && isPrime(i) == 1)
			{
				printf("%d ", i);
				n /= i;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	factorize(n);
	return 0;
}
