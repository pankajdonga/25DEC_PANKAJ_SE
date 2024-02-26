//Q.3 Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
#include<string.h>
main()
{
	char str[100], i,reverse[100];
	
	printf("Enter Any Word= ");
	gets(str);
	
	strrev(str);
		
	for(i=0; i<=str[i]; i++)
	{
		printf("%c, ", str[i]);
	}
}
