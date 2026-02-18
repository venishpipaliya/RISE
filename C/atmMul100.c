#include<stdio.h>


int main()
{
	int amountWithdraw, amount = 200000;
	
	amountWithdraw = amountWithdraw  * 100;
	
	if((amountWithdraw % 100) == 0)
	{
		printf("eligibal");
	}
	else
	{
		printf("Not eligibal");
	}
	
	
	
	return 0;
}
