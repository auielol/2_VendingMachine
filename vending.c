#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int main(int argc, char *argv[])
{
	int menu;
	
	printf("\n*-*WELCOME TO VENDING EXPRESS*-*\n");
	
	showSelection(menu);
	
	return 0;
}

int showSelection()
{
	int select, qty;
	
	printf("\nPlease Choose from the Selection");
	
	printf("\n[1] CANDIES (JPY 50)");
	printf("\n[2] CHIPS (JPY 100)");
	printf("\n[3] COOKIES (JPY 200)");
	printf("\n[4] SODA (JPY 500)");
	printf("\n[5] Shut Down");
	
	printf("\n\nSelection: ");
	scanf("%d", &select);
	
	switch(select)
	{
		case 1:
			system("cls");
			
			printf("\nHow many CANDIES would you like to purchase: ");
			scanf("%d", &qty);
			
			system("cls");
			
			sellProduct(qty, select);
			break;
		case 2:
			system("cls");
			
			printf("\nHow many CHIPS would you like to purchase: ");
			scanf("%d", &qty);
			
			system("cls");
			
			sellProduct(qty, select);
			break;
		case 3:
			system("cls");
			
			printf("\nHow many COOKIES would you like to purchase: ");
			scanf("%d", &qty);
			
			system("cls");
			
			sellProduct(qty, select);
			break;
		case 4:
			system("cls");
			
			printf("\nHow many SODA would you like to purchase: ");
			scanf("%d", &qty);
			
			system("cls");
			
			sellProduct(qty, select);
			break;
		case 5:
			system("cls");
			
			printf("Shutting Down...");
			
			return 0;
		default:
			system("cls");
			
			printf("\nINVALID INPUT\n\n");
			
			system("pause");
			
			system("cls");
			
			showSelection();
	}
}

int sellProduct(int qty, int select)
{
	getCount(qty, select);
}

