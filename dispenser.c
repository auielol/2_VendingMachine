#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int getCount(int qty, int select)
{
	struct Inventory candies;
	{
		strcpy(candies.nameOfItem, "Mentos");
		candies.numberOfItems = 100;
		candies.cost = 50;
	};
	struct Inventory chips;
	{
		strcpy(chips.nameOfItem, "Doritos");
		chips.numberOfItems = 100;
		chips.cost = 100;
	};
	struct Inventory cookies;
	{
		strcpy(cookies.nameOfItem, "Oreo");
		cookies.numberOfItems = 100;
		cookies.cost = 200;
	};
	struct Inventory soda;
	{
		strcpy(soda.nameOfItem, "Pepsi");
		soda.numberOfItems = 100;
		soda.cost = 500;
	}
	
	switch(select)
	{
		case 1:
			if (candies.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(candies.cost, qty);
				
				break;
			}
		case 2:
			if (chips.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(chips.cost, qty);
				
				break;
			}
		case 3:
			if (cookies.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(cookies.cost, qty);
				
				break;
			}
		case 4:
			if (soda.numberOfItems = 0)
			{
				printf("Item is unavailable");
				
				system("pause");
				
				return main();
			}
			else
			{
				getProductCost(soda.cost, qty);
				
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
