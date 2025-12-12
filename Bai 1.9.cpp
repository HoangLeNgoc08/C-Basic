#include <stdio.h>

/*function to caculate base cost*/

double day(int n)
{
	switch (n)
	{
		case 1:
			return 10;	
		case 2:
			return 10 + (10 * 0.5);
		default:
			return 0;
	}
	
	
}

int main()
{
	/*Declare passenger & number of days */
	int a, b;
	scanf("%d %d", &a, &b);
	double res = 10;
	
	/* check passenger type */
	switch (a)
	{	
		/*Passenger type 1: children (discount 30%) */
		case 1:	
			res = (double)(day(b) * ( 1 - 0.3));
			printf("%.2lf", res);
			break;   
		/*Passenger type 2: Adult (full price) */
		case 2:
			res = (double)(day(b));
			printf("%.2lf", res);
			break;
		/* Passenger type 3: senior ( discount 20%)*/
		case 3:
			res = (double)(day(b) * ( 1 - 0.2));
			printf("%.2lf", res);
			break;   
		default:
			printf("INVALID PASSENGER TYPE!\n");
	}
	return 0;
}