//Q.9 Write a program in C to find the maximum number of characters in a string.


#include<stdio.h>
#include<string.h>
main()
{
	char str1[100];
	int i,max=0;
	
	printf("Enter First String= ");
	gets(str1);

	for	(i=0; str1[i]!='\0'; i++)
	{
		if(strcmp()str1[0]==str1[i+1])
		{
			str1[0]=str1[i+1];
		}
	
		str1[i]++;
	}
	
	printf("%c", str1[0]);
	
}
