#include<stdio.h>

void main() {
	
	int a,b,c,d;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	printf("Enter third number:");
	scanf("%d",&c);
	
	printf("Enter fourth number:");
	scanf("%d",&d);
	
	if(a > b && a > c && a > d) 
	{
	 printf("a is greatest");
	}
	if(b > a && b > c && b > d) 
	{
	 printf("b is greatest");
	}
	if(c > b && c > a && c > d) 
	{
	 printf("c is greatest");
	}
	if(d > b && d > c && d > a) 
	{
	 printf("d is greatest");
	}	
}

