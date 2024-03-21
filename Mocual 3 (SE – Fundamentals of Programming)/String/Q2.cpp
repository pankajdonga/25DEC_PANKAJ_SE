//Q.2 Write a program in C to separate individual characters from a string.

#include<stdio.h>
main()
{
	char str[100],i,j;
	
	printf("Enter Any Words= ");
	gets(str);
	
	for(i=0; i<=str[i]; i++)
	{
		if(str[i]==' ')
		{
			printf("%c", "");
		}
		else
		{
			printf("%c, ", str[i]);	
		}
	}
}
