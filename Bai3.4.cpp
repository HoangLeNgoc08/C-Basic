#include <stdio.h>


/*Function : fibonacci */
int fibonacci(int n)
{
	int f1 = 0, f2 = 1;
	int fn = 0;
	
	/* Base cases */
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		for (int i = 3 ; i <= n ; i++)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
		return fn;
	}
	
}

int main()
{
	int n;
	/* read number of Fibonacci terms */
	scanf("%d", &n);
	
	/*print first n Fibo numbers*/
	for(int i = 1; i <= n ; i++)
	{
		printf("%d ", fibonacci(i));
	}
	
	return 0;
}