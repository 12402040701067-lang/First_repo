#include<stdio.h>

void main() 
{
	int year = 3444;
	
	printf("Enter Year:");
	scanf("%d", &year);
	
	if(year % 4 != 0)
	{
		printf("This year is common year");
	}
	else if (year % 100 != 0)
	{
		printf("This year is common year");
	}
	else if(year % 400 != 0)
	{
		printf("This year is common year");
	}
	else {
		printf("This year is leap year");
	}	
}
