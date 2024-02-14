//Q.9 C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
main()
{
	char ch;
	printf("Enter Any One Character(Uppercase, Lowercase, Special_Character, Digit)= ");
	scanf("%c", &ch);
	printf("\n");
	if(ch>='A' && ch<='Z') 
	{
		printf("Character is Uppercase");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Character is Lowercase");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Character is Digit");
	}
	else
	{
		printf("Character is Special Character");
	}
}
