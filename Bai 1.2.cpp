#include <stdio.h>

int main(){
	/*Khai bao & Nhap so nguyen*/
	int n;
	scanf("%d", &n);
	
	/*Kiem tra so nguyen*/
	if(n == 0)
	{
		printf("SO 0\n");
	}
	else if( n > 0)
	{
		printf("SO DUONG\n");
	}
	else{
		printf("SO AM\n");
	}
	return 0;
	
}