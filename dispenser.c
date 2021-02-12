#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int getCount(int NoOfItems, int select)
{
	struct Inventory beverage;
	{
		beverage.qty = 100;
		beverage.cost = 50;
	};
	struct Inventory snack;
	{
		snack.qty = 100;
		snack.cost = 100;
	};
	struct Inventory toy;
	{
		toy.qty = 100;
		toy.cost = 200;
	};
	struct Inventory manga;
	{
		manga.qty = 100;
		manga.cost = 500;
	}
	
	switch(select)
	{
		case 1:
			if (beverage.qty = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(beverage.cost, NoOfItems);
				
				break;
			}
		case 2:
			if (snack.qty = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(snack.cost, NoOfItems);
				
				break;
			}
		case 3:
			if (toy.qty = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(toy.cost, NoOfItems);
				
				break;
			}
		case 4:
			if (manga.qty = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(manga.cost, NoOfItems);
				
				break;
			}
	}
}

int getProductCost (int cost, int NoOfItems)
{
	int total;
	
	total = NoOfItems*cost;
	
	makeSale(total);
}

int makeSale(int total)
{
	currentBalance(total);
	
	return 0;
}
