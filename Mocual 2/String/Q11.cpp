//Q.11 Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
#include<string.h>
#include <ctype.h>
main()
{
	char str[100],ch;
	int i;
	
	printf("Enter First String= ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		ch= islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
		printf("%c", ch);
	}
	
	
}
