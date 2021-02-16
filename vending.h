#include <stdio.h>
#include <stdlib.h>

int showSelection();
int sellProduct(int qty, int select);

struct Inventory
{
	char nameOfItem[25];
	int numberOfItems;
	int cost;
};
