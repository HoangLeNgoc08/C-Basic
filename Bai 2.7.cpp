#include <stdio.h>

int main()
{
	/* Khai bao va nhap so tien n vao */
	long long n;
	scanf("%lld", &n);
	
	/* check xem so tien co phai boi cua 50 */
	if ( n % 50 != 0)
	{
		printf("ERROR!\n");
		return 0;
	}
	
	/* So to tung loai tien */
	int t500 = n / 500; n %= 500;
	int t200 = n / 200; n %= 200;
	int t100 = n / 100; n %= 100;
	int t50 = n / 50;
	
	/*Tong so to tien */
	int cnt = t500 + t200 + t100 + t50;
	
	/* Kiem tra tong so to co thoa man yeu cau */
	if (cnt > 20)
	{
		printf("Qua gioi han so to");
		return 0;
	}
	
	/*In ra so to tien neu lon hon 0 */
	if (t500 > 0)
	{
		printf("So to 500k %d\n", t500);			
	}
	if (t200 > 0)
	{
		printf("So to 200k %d\n", t200);			
	}
	if (t100 > 0)
	{
		printf("So to 100k %d\n", t100);	
	}
	if (t50 > 0)
	{
		printf("So to 50k %d", t50);		
	}
	
	return 0;
}