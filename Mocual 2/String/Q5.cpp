//Q.5 Write a program in C to compare two strings without using string library functions

#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100];
	int i;
	
	printf("Enter First String= ");
	gets(str1);
	printf("Enter Second String= ");
	gets(str2);
	
	if(str1[i]==str2[i])
	{
		printf("Both String Are Equal");
	}
	else
	{
		printf("Both String Are Not Equal");
	}
}
