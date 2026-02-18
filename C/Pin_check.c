#include<stdio.h>

int main()
{
	
	int pin = 1234, enterPin;

	
	
	for(int i=0;i<3;i++){
		
		printf("\n Enter your pin: ");
		scanf("%d",&enterPin);
		
		if(pin == enterPin){
			printf("pin is valid");
			break;
		}
		else{
			
			printf("pin is incorrect ");
			
		}
		
	}
	
	

	
	
	
	return 0;
}
