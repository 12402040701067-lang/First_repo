#include <stdio.h> 

void main() {
	
	printf("Enter Your marks:");
	int m;
	scanf("%d", &m);
	
	if(m<=100 && m>=90) {
	  printf("A Grade");
	} 
	
	 else if(m<=90 && m>=80) {
	  printf("B Grade");
   }
	  
	else if(m<=80 && m>=70) {
	  printf("C Grade");
   }
	else if(m<=70 && m>=60) {
	  printf("D Grade");
   }
   else
     printf("F Grade");
}
