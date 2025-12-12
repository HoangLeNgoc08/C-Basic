#include <stdio.h>

int main()
{
	/* declare and read two integers (a, b) and the operator (x)*/
	int a, b;
	char x;
	scanf("%d %d %c", &a, &b, &x);
	
	switch (x)
	{
		case '+':
			printf("%d", a + b);
			break;
		case '-':
			printf("%d", a - b);
			break;
		case '*':
			printf("%lld", 1ll * a * b);
			break;
		case '/':
			if(b != 0)
			{
				printf("%.2f", (float)a / b);
			}
			else
			{
				printf(" b = 0");
			}
			break;
		case '%':
			if(b != 0)
			{
				printf("%d", a % b);
			}
			else
			{
				printf(" b = 0");
			}
			break;
		default:
			printf("INVALID\n");
	}
	
	return 0;
}