#include <stdio.h>
#include <stdlib.h>

int showSelection(int menu);
int selectionChoice(int select);
int sellProduct(int NoOfItems, int select);

struct Inventory
{
	int qty;
	int cost;
};
