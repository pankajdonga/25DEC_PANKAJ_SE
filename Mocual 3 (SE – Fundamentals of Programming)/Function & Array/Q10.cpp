//Q.10 WAP to perform Palindrome number using for loop and function

#include<stdio.h>
#include<string.h>
input_number(int n)
{
	
}
main()
{
	char number[100],reverse;
	printf("Enter 4 Digit Number= ");
	scanf("%s", &number);
	
	reverse=strrev(number);
	
	if(strcmp(number,reverse)==0)
	{
		printf("This Number Is Palindrome");
	}
	else
	{
		printf("This Number Is Not Palindrome");
	}
}
