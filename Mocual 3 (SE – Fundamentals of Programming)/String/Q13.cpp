//Q.13 Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i;
	
	printf("Enter First String= ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if((str[i]>='A' && str[i]<='S') || (str[i]>='a' && str[i]<='z'))
		{
			printf("%c", str[i]);
		}
		else
		{
			str[i]=0;
		}
	}
	
	
}
