#include <stdio.h>

void main() {
	
	char character;
	
	printf("Enter your character:");
	scanf("%c", &character);
	
	if(character >= 97 && character <= 122) 
	{
		printf("This character is lowercase");
	}
	else 
	{
		printf("This character is not lower case");
	}
}
