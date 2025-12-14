#include <stdio.h>

int gcd(int a, int b)
{
	if ( b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a %b);
	}
}

int lcm(int a, int b)
{
	long long tmp = 1ll * a * b;
	int min = tmp / gcd(a, b);
	return min;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", gcd(a, b));
	printf("%d", lcm(a, b));
	
	return 0;
}