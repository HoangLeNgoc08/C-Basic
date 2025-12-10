#include <stdio.h>

int main()
{
	/* Khai bao va nhap so tuoi*/
	int n;
	printf("So tuoi la :");
	scanf("%d", &n);
	
	/* Kiem tra dieu kien */
	if (n >= 18)
	{
		printf("DU DIEU KIEN\n");
	}
	else
	{
		printf("KHONG DU DIEU KIEN\n");	
	}
	return 0;
}