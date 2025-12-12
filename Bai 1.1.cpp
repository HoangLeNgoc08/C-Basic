#include <stdio.h>

int main(){
	/* Nhap so nguyen*/
	int x;
	scanf("%d", &x);
	
	/* Kiem tra chan le*/
	if(x % 2 == 0){
		printf("CHAN\n");
	}
	else{
		printf("LE\n");
	}
	return 0;
}