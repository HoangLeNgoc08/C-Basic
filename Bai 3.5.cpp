#include <stdio.h>

/* Function : Palindrome*/
int isPalindrome(int n)
{
	int original = n;
	int reversed = 0;
	while (n)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	
	return original == reversed;
}

int main()
{
	/*read integer n for check n is Palindrome*/
	int n;
	scanf("%d", &n);
	
	if (isPalindrome(n))
	{
		printf("n is a palindrome number!\n");
	}
	else
	{
		printf("n is not a palindrome number!\n");
	}
}