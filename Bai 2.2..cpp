#include <stdio.h>

int main()
{
	/* declare and read value 'n' from user input */
	int n;
	scanf("%d", &n);
	
	/* initialize the sum variable */
	float sum = 0;
	
	/*loop from 1 to n */
	int i = 1;
	for(i = 1 ; i <= n ; i++)
	{
		sum += 1.0 / i;
	}
	
	/* the final sum */
	printf("%.2f", sum);
		
	return 0;
}