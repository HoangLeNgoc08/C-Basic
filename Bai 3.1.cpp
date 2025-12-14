#include <stdio.h>
#include <math.h>

/*Check prime*/
int isPrime(int n)
{
	int i = 2;
	for(i = 2; i <=sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	
	return n > 1;
}

/* main function */
int main()
{
	int n;
	scanf("%d", &n);
	int check = isPrime(n);
	if (check)
	{
		printf("n is a prime");
	}
	else
	{
		printf("n is not prime");
	}
	
	return 0;
}