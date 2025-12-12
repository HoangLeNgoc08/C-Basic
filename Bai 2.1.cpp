#include <stdio.h>

int main()
{
	/*Declare & read the upper limit 'n' from user input */
	int n;
	scanf("%d", &n);
	
	/* initalize count for number divisible by 3 or 5*/
	int count = 0;
	
	/* Loop from 1 up to 'n' */
	int i = 1;
	for(i = 1; i <= n; i++)
	{
		/* check if the current number 'i' is divisible vy 3 or 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			count++;
		}
	}
	/* print the final count */
	printf("%d", count);
	
	return 0;
}