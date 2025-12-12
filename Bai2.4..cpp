#include <stdio.h>

int main()
{
	/*declare & read the upper limit 'n' from user input */
	int n;
	scanf("%d", &n);
	
	/* Loop throw numbers from 2 up to 'n' to find perfect numbers*/
	for(int i = 2; i<= n; i++)
	{
		/* initialize the sum of proper divisor for the current number*/
		int sum = 0;
		
		/* loop find all proper divisors */
		for(int j = 1; j < i; j++)
		{
			if ( i % j == 0)
			{
				
				/* add the proper divisor to the sum*/
				sum +=j;	
			}	
		}
		
		/* check if the number 'i' is a perfect number*/	
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}