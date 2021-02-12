#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int getCount(int noOfItems, int select)
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
				getProductCost(beverage.cost, noOfItems);
				
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
				getProductCost(snack.cost, noOfItems);
				
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
				getProductCost(toy.cost, noOfItems);
				
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
				getProductCost(manga.cost, noOfItems);
				
				break;
			}
	}
}

int getProductCost (int cost, int noOfItems)
{
	int total;
	
	total = noOfItems*cost;
	
	makeSale(total, noOfItems);
}

int makeSale(int total, int noOfItems)
{
	currentBalance(total, 0, noOfItems);
	
	return 0;
}
