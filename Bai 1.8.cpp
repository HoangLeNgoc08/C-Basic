#include <stdio.h>

int main()
{
	/* declare */
	float a, b;
	char x;
	scanf("%f %f %c", &a, &b, &x);
	double result;
	
	/*check character*/
	switch (x)
	{
		case '+':
			result = (double) a + b;
			printf("%.2lf", result);
			break;
		case '-':
			result = (double) a - b;
			printf("%.2lf", result);
			break;
		case '*':
			result = (double) a * b;
			printf("%.2lf", result);
			break;
		case '/':
			if ( b == 0)
			{
				printf("INVALID!\n");
			}
			else
			{
				result = (double)a / b;
				printf("%.2lf", result);
			}
			break;
		default:
			printf("ERROR!\n");
	}
	return 0;
}