#include <stdio.h>

/*
	1. calculate factorial
*/
void factorial(int n)
{
	long long res = 1;
	for(int i = 1; i <= n; i++)
	{
		res *= (long long)i;
	}
	printf("factorial of %d is %lld\n", n, res );
}

/*
	2. Check prime
*/

void isPrime(int n)
{
	if ( n <= 1)
	{
		printf("%d is a not prime number", n);
		return;
	}
	for(int i = 2; i * i <= n ; i++)
	{
		if (n % i == 0)
		{
			printf("%d is a not prime number", n);
			return;
		}
	}
	printf("%d is a prime number", n);
}

/*Calculate Fibonacci*/
void fibonacci(int n)
{
	if (n <= 0)
	{
		printf("Invalid input\n");
		return;
	}
	
	if (n == 1)
	{
		printf("0\n");
		return;
	}
	
	if (n == 2)
	{
		printf("1\n");return;
		
	}
	int f1 = 0, f2 = 1;
	int fn = 0;
	for(int i = 3 ; i <= n; i++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	printf("Fibonacci(%d) = %d\n", n, f2);

}

void Palidrome(int n)
{
	int Pali = 0, tmp = n;
	while (n > 0)
	{
		Pali = Pali * 10 + n % 10;
		n /= 10;
	}
	if (Pali == tmp)
	{
		printf("%d is a palidrome number\n", tmp);
	}
	else
	{
		printf("%d is not a palidrome number\n", tmp);
	}
}

int main()
{
	int n;
	int m;
	do
	{
		printf("Calculation menu\n");
		printf("1. Calculate factorial\n");
		printf("2. Check Prime\n");
		printf("3. Calculate Fibonacci\n");
		printf("4. Check palindrome\n");
		printf("5. Exit\n");
		printf("Let choose option: ");
		scanf("%d", &n);
		switch(n)
		{
			case 1:
				printf("--CALCULATE FACTORIAL--\n");
				printf("Enter number: ");
				scanf("%d", &m);
				factorial(m);
				break;
			case 2:
				printf("--CHECK PRIME--\n");
				printf("Enter number: ");
				scanf("%d", &m);
				isPrime(m);
				break;
			case 3:
				printf("--CALCULATE FIBONACCI--\n");
				printf("Enter number: ");
				scanf("%d", &m);
				fibonacci(m);
				break;
			case 4:
				printf("--CHECK PALINDROME--\n");
				printf("Enter number: ");
				scanf("%d", &m);
				Palidrome(m);
				break;
			case 5:
				printf("--SEE YOU AGAIN!--\n");
				break;
			default:
				printf("EXIT!\n");
		}	
	}while (n != 5);

	return 0;
}