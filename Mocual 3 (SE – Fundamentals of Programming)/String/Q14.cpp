//Q.14 Write a program in C to combine two strings manually

#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100];
	int i;
	
	printf("Enter First Word= ");
	gets(str1);
	
	printf("Enter Second Word= ");
	gets(str2);
	printf("%s", str1);
	printf(" %s", str2);	
}
