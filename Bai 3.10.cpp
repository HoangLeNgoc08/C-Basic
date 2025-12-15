#include <stdio.h>
#include <math.h>

int isArmstrong(int n)
{
	int tmp = n;
	int digits = 0;
	int sum = 0;
	
	while(tmp > 0)
	{
		digits++;
		tmp /= 10;
	}
	
	tmp = n;
	
	while(tmp > 0)
	{
		int digit = tmp % 10;
		sum += pow(digit, digits);
		tmp /= 10;
	}
	return sum == n;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n ; i++)
	{
		if(isArmstrong(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}