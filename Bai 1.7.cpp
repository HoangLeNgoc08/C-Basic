#include <stdio.h>

int main()
{
	/* declare and input 3 integers */
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	/* check triangle */
	if ( a + b > c && b + c > a && c + a > b)
	{
		/* EQUILATERAL TRIANGLE */
		if(a == b && a == c)
		{
			printf("EQUILATERAL TRIANGLE!\n");
		}
		
		/* check right triangle */
		else if( 1ll * a * a + 1ll * b * b == 1ll * c * c || 1ll * a * a + 1ll * c * c == 1ll * b * b || 1ll * c * c + 1ll * b * b == 1ll * a * a)
		{
			printf("RIGHT TRIANGLE!\n");
		}
		
		/* check scalene triangle */
		else
		{
			printf("SCALENE TRIANGLE !\n");	
		}
	}
	else
	{
		printf("INVALID TRIANGLE\n");
	}
}