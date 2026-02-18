#include<stdio.h>

float Permennant(float basic){
	float hra,da;
	
	hra = basic * 0.2;
	da = basic * 0.1;
	
	float total_salary = basic + hra +da;
	//printf("%f",total_salary);
	return total_salary;
	
}

float contract(float fixedpay){
	printf("%f",fixedpay);
}

float intern(float stipen){
	printf("%f",stipen);
}

int main()
{
	int emptype,emp_count,sum,i,total;
	float basic,fixedpay,stipen,salary[50],min,max;
	
	printf("how many employee: ");
	scanf("%d",&emp_count);
	
	printf("1. permennant\n2. for contract\n3. for intern\n");
	scanf("%d",&emptype);
	
	for(int i=0;i<emp_count;i++){
		switch(emptype){
			case 1:
					
				
					printf("\nenter basic salary: ");
					scanf("%f",&basic);
				
					
					if(basic<=0){
						printf("Invalid salary");
						salary[i]=0;
						}else{
							
							
							salary[i]=Permennant(basic);
							printf("\n");
						}
				
				break;
			case 2:
				for(i=0;i<emp_count;i++){
				
				printf("enter fixedpay salary: ");
				scanf("%f",&fixedpay);
				}
				
				if(fixedpay<=0){
					printf("Invalid salary");
					salary[i]=0;
				}else{
					for(i=0;i<emp_count;i++){
					}
					salary[i]=contract(fixedpay);
				}
				break;
			case 3:
				printf("enter Stipen salary: ");
				scanf("%f",&stipen);
				
				if(stipen<=0){
					printf("Invalid salary");
					salary[i]=0;
				}else{
					salary[i]=intern(stipen);
				}
				break;
			default:
				printf("please select valid no.");
		}
		for (int i=0;i<emp_count;i++){
			
			sum+=salary[i];
			
			min=max=salary[i];
			if(salary[i]>max){
				max=salary[i];
			}else if(salary[i]<min){
				min=salary[i];
		}
	}

	printf("%f\n",sum);
	printf("%f\n",max);
	printf("%f\n",min);
	
}


	return 0;
}


/*
#include<stdio.h>

float permanent(float basic){
    return basic + (basic * 0.2) + (basic * 0.1);
}

float contract(float fixedpay){
    return fixedpay;
}

float intern(float stipend){
    
	return stipend;
}

int main()
{
    int emptype ;	
	int emp_count;
    float basic;
	float fixedpay; 
	float stipend;
    float salary[50];
    float total = 0, min, max;

    printf("How many employees: ");
    scanf("%d", &emp_count);

    printf("1. Permanent\n2. Contract\n3. Intern\n");
    printf("Enter employee type: ");
    scanf("%d", &emptype);

    for(int i = 0; i < emp_count; i++){
        switch(emptype){
            case 1:
                printf("Enter basic salary: ");
                scanf("%f", &basic);

                if(basic <= 0){
                    salary[i] = 0;
                } else {
                    salary[i] = permanent(basic);
                }
                break;

            case 2:
                printf("Enter fixed pay: ");
                scanf("%f", &fixedpay);

                if(fixedpay <= 0){
                    salary[i] = 0;
                } else {
                    salary[i] = contract(fixedpay);
                }
                break;

            case 3:
                printf("Enter stipend: ");
                scanf("%f", &stipend);

                if(stipend <= 0){
                    salary[i] = 0;
                } else {
                    salary[i] = intern(stipend);
                }
                break;

            default:
                printf("Invalid choice\n");
                return 0;
        }
    }

	  min = max = salary[0];

    for(int i = 0; i < emp_count; i++){
        total += salary[i];

        if(salary[i] < min)
            min = salary[i];

        if(salary[i] > max)
            max = salary[i];
    }

    printf("\nTotal Salary = %.2f", total);
    printf("\nMinimum Salary = %.2f", min);
    printf("\nMaximum Salary = %.2f", max);

    return 0;
}

*/

// if employee is permennent 10% tax, contract 5%, intern no tax
// if parmemnenet salary > 50000 then 5000 bonus



