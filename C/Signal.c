#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter your choice for signal light:  ");
	scanf("%d",&n);
	
	if(n==1){
		printf("Color is red");
	}
	if(n==2){
		printf("Color is yellow");
	}
	if(n==3){
		printf("Color is green");
	}
	else{
		printf("Please enter number between 1 to 3");
	}
	return 0;
}
