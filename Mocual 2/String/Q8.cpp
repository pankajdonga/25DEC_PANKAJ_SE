//8. Write a program in C to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<string.h>
main()
{
	char str1[100];
	int i,vowels=0, cons=0;
	
	printf("Enter Any Words= ");
	gets(str1);
	
	for(i=0; str1[i]!='/0'; i++)
	{
		if(str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U' || str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
		{
			vowels++;
		}
		else
		{
			cons++;
		}
	}
	
	printf("Number Of Vowels Is= %d\n", vowels);
	printf("Number Of Consonants Is= %d\n", cons);
}
