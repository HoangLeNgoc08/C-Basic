#include <stdio.h>

/*Function : Calculates factorial of an integer n*/

long long factorial(int n)
{
	/*Base case: Factorial n < 0*/
	if(n < 0)
	{
		return 0;
	}
	if (n == 1)
		return 1;
	/*recursive case:
	  Use 1ll to cast overflow*/
	return 1ll * n * factorial(n - 1);
}

int main()
{
	/*read an integer n from standard input*/
	int n;
	scanf("%d", &n);
	
	/*print the factorial of n*/
	long long res = factorial (n);
	if (res)
	{
		printf("%lld", res);
	}
	else
	{
		printf("ERROR!\n");
	}
	
	return 0;
}