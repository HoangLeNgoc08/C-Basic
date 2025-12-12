#include <stdio.h>

int main()
{
	/* declare and read the number of rows 'n' from user input */
	int n;
	scanf("%d", &n);
	
	/* loop */
	for(int i = 0 ; i < n ; i++)
	{
		/* So dau tien la so 1 */
		
		int tmp = 1;
		for (int j = 0 ; j <= i ; j++)
		{
			printf("%d ", tmp);
			tmp = tmp * (i - j) / (j + 1);
		}
		/* Di chuyen xuong dong khac*/
		printf("\n");
	}
	
	return 0;
}