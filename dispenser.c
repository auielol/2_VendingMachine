#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int getCount(int qty, int select)
{
	struct Inventory beverage;
	{
		beverage.nameOfItem = "CocaCola";
		beverage.numberOfItems = 100;
		beverage.cost = 50;
	};
	struct Inventory snack;
	{
		snack.nameOfItem = "KitKat";
		snack.numberOfItems = 100;
		snack.cost = 100;
	};
	struct Inventory toy;
	{
		toy.nameOfItem = "Gacha";
		toy.numberOfItems = 100;
		toy.cost = 200;
	};
	struct Inventory manga;
	{
		manga.nameOfItem = "KimetsuNoYaiba";
		manga.numberOfItems = 100;
		manga.cost = 500;
	}
	
	switch(select)
	{
		case 1:
			if (beverage.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(beverage.cost, qty);
				
				break;
			}
		case 2:
			if (snack.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(snack.cost, qty);
				
				break;
			}
		case 3:
			if (toy.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(toy.cost, qty);
				
				break;
			}
		case 4:
			if (manga.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(manga.cost, qty);
				
				break;
			}
	}
}

int getProductCost (int cost, int qty)
{
	int total;
	
	total = qty*cost;
	
	makeSale(total, qty);
}

int makeSale(int total, int qty)
{
	currentBalance(total, 0, qty);
	
	return 0;
}
