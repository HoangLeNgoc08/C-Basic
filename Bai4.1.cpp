#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[10000];
	
	for(int i = 0; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	long long sum = 0;
	
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	
	double avg = (double)sum / n;

    printf("Tong = %lld\n", sum);
    printf("Trung binh cong = %.2f", avg);
    
	return 0;
}