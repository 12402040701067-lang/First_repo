#include <stdio.h> 

 void main() {

   int marks1, marks2, marks3;

   printf("Enter your Marks1:");
   scanf("%d", &marks1);
  
   printf("Enter your Marks2:");
   scanf("%d", &marks2);
  
   printf("Enter your Marks3:");
   scanf("%d", &marks3);
   
   float total = (marks1 + marks2 + marks3)/3;

   if(total>=40) 
   {
   	 if(marks1<33 || marks2<33 || marks3<33) {
   	 	printf("sorry you have failed in one subject");
		}
		else {
		 printf("Congrats you have passed your exam");
		}		
   }
    else {
    	printf("sorry you have failed the exam");
	}
}
