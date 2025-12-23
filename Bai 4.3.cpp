#include <stdio.h>

void enter_arr(int a[], int n)
{
	for(i = 0; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
}

int cnt_x(int a[], int n, int x)
{
	int count = 0;
	for(int i = 0; i < n ; i++)
	{
		if (a[i] == x)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	enter_arr(a, n);
	int x;
	scanf("%d", &x);
	printf("%d", cnt_x(a, n, x));
	return 0;
}