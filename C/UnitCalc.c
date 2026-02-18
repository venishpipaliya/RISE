#include<stdio.h>

int main(){
	
	int unit,cost = 0;
	
	printf("Enter unit: ");
	scanf("%d",&unit);
	
	if(unit <= 100)
	{
		cost = unit *2;
	}
	else if (unit <= 200)
	{
		cost = (100*2) + (unit - 100) * 3;
	}
	else
	{
		cost = (100*2) + (100 * 3) + (unit - 200) *5 ;
	}
	
				printf("total unit is %d and cost of Bill %d : ", unit,cost);

	
	
	
	
	
	
	return 0;
}
