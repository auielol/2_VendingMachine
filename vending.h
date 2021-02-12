#include <stdio.h>
#include <stdlib.h>

int showSelection();
int sellProduct(int noOfItems, int select);

struct Inventory
{
	int qty;
	int cost;
};
