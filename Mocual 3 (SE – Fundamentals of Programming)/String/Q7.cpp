//Q.7 Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100];
	
	printf("Enter First String= ");
	scanf("%s", str1);
	
	printf("String Afetr Copy Is= %s", strcpy(str2,str1));
	
}
