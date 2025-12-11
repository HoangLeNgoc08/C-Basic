#include <stdio.h>

long long calculate_base_cost(int n_kwh)
{
	long long total_cost = 0;
	int kwh_remain = n_kwh;
	
	/*Level 4: > 200kwh (3k/kwh)*/
	if(kwh_remain > 200)
	{
		total_cost += 1ll * (kwh_remain - 200) * 3000;
		kwh_remain = 200;
	}
	/*Level 3: 101 <= kwh <= 200 (2500 / kwh)*/
	if(kwh_remain >= 101)
	{
		total_cost += 1ll * (kwh_remain - 100) * 2500;
		kwh_remain = 100;
	}
	/*Level 2: 51 <= kwh <= 100 (2000/kwh) */
	if(kwh_remain >= 51)
	{
		total_cost += 1ll * (kwh_remain - 50) * 2000;
		kwh_remain = 50;
	}
	/* Level 1: 0 <= kwh <= 50  (1800/kwh) */
	if(kwh_remain > 0)
	{
		total_cost += 1800 * kwh_remain;
	}
	return total_cost;
}


int main()
{
	int n, x;
	scanf("%d %d", &n, &x);
	long long base_cost = calculate_base_cost (n);
	double final_cost = (double) base_cost;
	
	switch (x)
	{	
		/* if sum kwh > 300 */
		case 1: 
			if (n > 300)
			{
				final_cost *= 1.05;
			}
			break;
		case 2:
			final_cost *= 0.9;
			break;
		default:
			printf("ERROR!\n");
			return 1;
	}
	/* if kwh <= 30 */
	if (n <= 30 && final_cost < 50000)
	{
		final_cost = 50000;
	}
	printf("%.2lf", final_cost);
	return 0;
}
