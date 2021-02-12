#include "vending.h"
#include "dispenser.h"
#include "cashregister.h"

int currentBalance(int total, int Bal)
{
	int newBal, remBal;
	
	printf("\nPlease deposit JPY %d: ", total);
	scanf("%d", &newBal);
	
	Bal = Bal + newBal;
	
	calculateBalance(remBal, Bal, total);
}

int calculateBalance(int remBal, int Bal, int total)
{
	if (Bal == total)
	{
		return acceptMoney();
	}
	else if (Bal < total)
	{
		printf("\nInsufficient Money. \nRemaining Balance: %d\n", remBal);
		
		return currentBalance(total, Bal);
	}
	else if (Bal > total)
	{
		Bal = Bal - total;
		
		printf("\nPlease Take Your Change: %d", Bal);
		printf("\nIf change is insufficient, please inform the staff.");
	}
}


int acceptMoney()
{
	printf("\nPlease enjoy your item(s)\n");
	
	system("pause");
	system("cls");
	
	return main();
}
