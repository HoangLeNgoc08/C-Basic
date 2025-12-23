#include <stdio.h>

void enter_arr(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void selection_sort(int a[], int n)
{
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int min = a[i];
		int index = i;
		for(int j = i + 1; j < n; j++)
		{
			if (a[j] <= min)
			{
				min = a[j];
				index = j;
			}
		}
		int tmp = a[i]; a[i] = a[index]; a[index] = tmp;
	}
}

void print_arr(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	enter_arr(a, n);
	selection_sort(a, n);
	print_arr(a, n);
	return 0;
}