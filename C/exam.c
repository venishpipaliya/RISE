 #include<stdio.h>
 
 
 int hourCalculation(int hours){
 	
 	
 	if(hours <= 2){
 		hours *= 30;
	 }else if(hours >= 3 && hours < 5){
	 	hours *= 50;
	 }else{
	 	hours *= 100;
	 }
	 
	 
	 return hours;
 }
 
 
 int main(){
 	
 	int totalPrice = 0, slots[50][50], hours,n,id;
 	
 	// calculate parking charge
 	printf("enter total Hours ");
 	scanf("%d",&hours);
 	totalPrice = hourCalculation(hours);
 	printf("%d\n",totalPrice);
 	
 	printf("how many car you park:");
 	scanf("%d",&n);
 	
 	for(int i=0;i<n;i++){
 		for(int j=0;j<i;j++){
 			printf("enter parking id and hours:");
 			scanf("%d",&slots[i][j]);
		 }
 		
	 }
 	
 	
 	return 0;
 }
 
 
