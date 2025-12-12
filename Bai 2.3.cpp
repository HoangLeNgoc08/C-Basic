#include <stdio.h>

int main()
{
	/*declare and read the integer'n' from user input*/
	int n;
	scanf("%d", &n);
	
	/*the reversed number variable must be initialized to 0*/
	int reversed_n = 0;
	
	/*loop until the original number 'n' becomes 0*/
	while (n)
	{
		/*extract the last digit */
		int digit = n % 10;
		
		/* build the reversed number */
		reversed_n = reversed_n * 10 + digit;
		
		/* remove the last digit from the orginal numb? 'n; */
		
		n /= 10;
	}
	
	/*print the final reversed number */
	printf("%d", reversed_n);
	
	return 0;
}