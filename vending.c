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

int showSelection(int menu)
{
	int select;
	
	printf("\nPlease Choose from the Selection");
	
	printf("\n[1] BEVERAGE (JPY 50)");
	printf("\n[2] SNACK (JPY 100)");
	printf("\n[3] TOY (JPY 200)");
	printf("\n[4] MANGA (JPY 500)");
	printf("\n[5] Exit");
	
	printf("\n\nSelection: ");
	scanf("%d", &select);
	
	selectionChoice(select);
}

int selectionChoice(int select)
{
	int NoOfItems;
	
	switch(select)
	{
		case 1:
			system("cls");
			
			printf("\nHow many BEVERAGES would you like to purchase: ");
			scanf("%d", &NoOfItems);
			
			sellProduct(NoOfItems, select);
			break;
		case 2:
			system("cls");
			
			printf("\nHow many SNACKS would you like to purchase: ");
			scanf("%d", &NoOfItems);
			
			sellProduct(NoOfItems, select);
			break;
		case 3:
			system("cls");
			
			printf("\nHow many TOYS would you like to purchase: ");
			scanf("%d", &NoOfItems);
			
			sellProduct(NoOfItems, select);
			break;
		case 4:
			system("cls");
			
			printf("\nHow many MANGAS would you like to purchase: ");
			scanf("%d", &NoOfItems);
			
			sellProduct(NoOfItems, select);
			break;
		case 5:
			return 0;
		default:
				printf("INVALID INPUT\n");
				system("pause");
				system("cls");
				showSelection(select);
	}
}

int sellProduct(int NoOfItems, int select)
{
	getCount(NoOfItems, select);
}

