//Q.10 Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
main()
{
	char str1[100];
	int i,j=0;
	
	printf("Enter First String= ");
	gets(str1);

	for	(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i]==' ')
		{
			str1[i]= 0;
			printf("\n");
		}
		printf("%c", str1[i]);
	}
	
}
