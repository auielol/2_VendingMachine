#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int currentBalance(int total, int bal, int qty)
{
	int newBal, remBal, tries, refund;
	
	for (tries = 0; tries < 2; tries++)
	{
		printf("\nPlease deposit JPY %d: ", total);
		scanf("%d", &newBal);
		
		bal = bal + newBal;
		remBal = total - bal;
		
	if (bal == total)
	{
		return acceptMoney(qty);
	}
	else if (bal < total)
	{
		system("cls");
		
		printf("\nInsufficient Money. \nRemaining Balance: %d\n", remBal);
	}
	else if (bal > total)
	{
		getChange(bal, total, qty);
		
		return 0;
	}
	}
	
	refund = bal;
	
	tries++;
	
	system("cls");
	
	if (tries > 2)
	{
		printf("\nInsufficient Money. Money Refunded: JPY %d", refund);
	}
	
	printf("\n\n");
	
	system("pause");
	system("cls");
	
	return main();
}

int getChange (int bal, int total, int qty)
{
	int change;
	
	change = bal - total;
	
	system("cls");
	
	printf("\nPlease Take Your Change: JPY %d", change);
	printf("\n\nIf change is insufficient, please inform the staff.\n\n");
	
	system("pause");
	system("cls");
	
	return acceptMoney(qty);
}


int acceptMoney(int qty)
{
	system("cls");
	
	if (qty == 1)
	{
		printf("\nPlease enjoy your item\n");
	}
	else
	printf("\n*-* Please enjoy your items! *-*\n");
	
	printf("\n");
	
	system("pause");
	system("cls");
	
	return main();
}
