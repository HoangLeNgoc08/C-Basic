#include <stdio.h>

int main()
{
	/* Khai bao & Nhap so thang */
	int n;
	scanf("%d", &n);
	
	/* So ngay cu moi thang */
	switch (n)
	{
		case 2:
			printf("28\n");
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("30\n");
			break;
		default:
			printf("ERROR!\n");
	}
	return 0;
}