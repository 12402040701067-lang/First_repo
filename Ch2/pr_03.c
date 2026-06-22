#include <stdio.h>

void main() {
	
	int income;
	float tax = 0;
	
	printf("Enter your amount of income:");
	scanf("%d", &income);
	
		 if(income < 2500000) 
		{
		  printf("Your income is less than 2.5L so no tax");
		}
		
		else if (income >= 2500000 && income <= 500000) {
			printf("Your income is b/w 2.5L & 5L");
			tax = tax + 0.5*(income-250000);
		} 
		
		else if (income >= 500000 && income <= 1000000) {
			printf("Your income is b/w 2.5L & 5L");
			tax = tax + tax + 0.5*(500000-250000);
			tax = tax + 0.2*(income-500000);
		}
		else {
			printf("Your income is above 10L");
			tax = tax + tax + 0.5*(500000-250000);
			tax = tax + 0.2*(100000-500000);
			tax = tax + 0.3*(income-100000);
		}
		printf("\nYour total tax is %f", tax);
}
