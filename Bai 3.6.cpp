#include <stdio.h>

/* Function : calculate the sum of digits of an integer n using recursin */
int sumDigits(int n)
{
	/*
	Base case
		- if n has only one digit 
	*/
	if (n < 10)
	{
		return n;
	}
	
	/*
	recursive case
		- n / 10 removes the last digit
		- n % 10 gets the last digit 
	*/
	else
	{
		return sumDigits(n / 10) + n % 10 ;	
	}
}

int main()
{
	/*declare an integer variable n*/
	int n;
	/*read an integer from keyboard*/
	scanf("%d", &n);
	/*call sumDigits function and print the result*/
	printf("%d", sumDigits(n));
	
	return 0;
}