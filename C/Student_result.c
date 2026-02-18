#include<stdio.h>

int main()
{
	int marks[5][5];
	float avg;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter 5 student marks of 5 subject marks: ");
			scanf("%d",&marks[i][j]);
		}
	}

	
	
	
//	int a,b,c,d,e;
//	float avg;
//	
//	
//	
//	printf("Enter 5 subjects marks\n");
//	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//	
//	avg= (a+b+c+d+e)/5.0;
//	
//	printf("a=%d b=%d c=%d d=%d e=%d avg=%.2f\n", a,b,c,d,e,avg);
//	
//	if((a>=40 && b>=40 && c>=40 && d>=40 && e>=40) && (avg >= 50)){
//		printf("you are pass");
//	}else{
//		printf("you are fail");
//	}
	
	return 0;
}

