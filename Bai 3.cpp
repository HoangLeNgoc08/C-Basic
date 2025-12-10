#include <stdio.h>

int main()
{
	/* Khai bao va nhap so diem */
	float x;
	printf("So diem = ");
	scanf("%f", &x);
	
	/* Xep loai hoc luc */
	if( x < 100)
	{
		if (x >= 90)
		{
			printf("XUAT SAC\n");
		}
		else if (x >= 80)
		{
			printf("GIOI\n");
		}
		else if (x >= 65)
		{
			printf("KHA\n");
		}
		else if (x >= 50)
		{
			printf("TRUNG BINH\n");
		}
		else
		{
			printf("YEU\n");
		}
	}
	else
	{
		printf("So lieu khong hop le!\n");	
	}
	return 0;
}