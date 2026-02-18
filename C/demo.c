//#include<stdio.h>
//
//int main(){
//	
//	int customerID, unit, totalBill = 0, choice;
//	char customerName [50];
//	int i;
//	
//	printf("press 1 to continue or 0 for exit ");
//	scanf("%d",&choice);
//	
//	while(choice != 0) {
//
//	
//	switch (choice){
//		case 0:
//			break;
//		case 1:
//			
//			printf("\n\npress 1 to continue or 0 for exit ");
//			scanf("%d",&choice);
//			printf("enter Customer ID: ");
//			scanf("%d",&customerID);
//			printf("enter Customer name: ");
//			scanf("%s",customerName);
//			printf("enter Unit: ");
//			scanf("%d",&unit);
//			
//			if(unit<=100){
//				totalBill = unit * 5;
//			}else if (unit <= 200){
//				totalBill = (100*5) + (unit-100)*7;
//			}else{
//				totalBill = (100*5) + (100 * 7) + (unit - 200) *10 ;
//			}
//			
//			printf("\nCustomer ID: %d",customerID);
//			printf("\nCustomer Name: %s",customerName);
//			printf("\nUnit consumed: %d",unit);
//			printf("\nTotal BIll %d",totalBill);
//			
//			break;
//			
//		default:
//        printf("Default case is Matched.");
//        break;
//		i++;
//	}
//	}
//	
//		
//		
//	
//	
//	
//	return 0;
//}



#include <stdio.h>

int main() {
    int customerID, unit, totalBill = 0, choice;
    char customerName[50];

    printf("Press 1 to calculate a bill or 0 to exit: ");
    scanf("%d", &choice);

    while (choice != 0) {
        if (choice == 1) {
            printf("\nEnter Customer ID: ");
            scanf("%d", &customerID);
            printf("Enter Customer name: ");
            scanf("%s", customerName);
            printf("Enter Units consumed: ");
            scanf("%d", &unit); // Fixed %D to %d

            // Logic for Slab Rates
            if (unit <= 100) {
                totalBill = unit * 5;
            } else if (unit <= 200) {
                totalBill = (100 * 5) + (unit - 100) * 7;
            } else {
                totalBill = (100 * 5) + (100 * 7) + (unit - 200) * 10;
            }

            printf("\n--- Bill Summary ---");
            printf("\nCustomer ID: %d", customerID);
            printf("\nCustomer Name: %s", customerName);
            printf("\nUnit consumed: %d", unit);
            printf("\nTotal Bill: %d", totalBill);
            printf("\n--------------------\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        printf("\nPress 1 to continue or 0 for exit: ");
        scanf("%d", &choice);
    }

    printf("Exiting program. Goodbye!");
    return 0;
}
