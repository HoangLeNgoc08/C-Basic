#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int x;
	
	/*Vong lap chon sp nhieu lan*/
	do
	{
		printf("1.Water(10000 VND)\n2.Soft drink(15000 VND)\n3.Coffee(20000 VND)\n4.Milk tea(25000 VND)\n5.Exit\n");
		scanf("%d", &x);
		switch(x)
		{
			case 1:
				if (n < 10000)
				{
					printf("Not enough money\n");
				}
				else
				{
					printf("You bought a bottle of water!\n");
					n -= 10000;
					printf("Current balance: %d VND\n", n);
				}
				break;
			case 2:
				if (n < 15000)
				{
					printf("Not enough money\n");
				}
				else
				{
					printf("You bought a bottle of soft drink!\n");
					n -= 15000;
					printf("Current balance: %d VND\n", n);
				}
				break;
			case 3:
				if (n < 20000)
				{
				printf("Not enough money\n");
				}
				else
				{
					printf("You bought a cup of coffee!\n");
					n -= 20000;
					printf("Current balance: %d VND\n", n);
				}
				break;
			case 4:
				if (n < 25000)
				{
				printf("Not enough money\n");
				}
				else
				{
					printf("You bought a cup of milk tea!\n");
					n -= 25000;
					printf("Current balance: %d VND\n", n);
				}
				break;
			case 5:
				printf("Your change: %d VND\n", n);
				break;
			default:	
				printf("Invalid choice\n");
		}
	} while (x != 5 && n > 0);
	return 0;
}