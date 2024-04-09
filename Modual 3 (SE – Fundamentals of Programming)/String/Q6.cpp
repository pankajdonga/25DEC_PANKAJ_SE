//Q.6 Write a program in C to count the total number of alphabets, digits and special characters in a string

#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i,alphabets=0,number=0,spac=0;
	printf("Enter A String include with(alphabets, digits and special characters)= ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			alphabets++;
		}
		else if(str[i]>='0' && str[i]<='9')	
		{
			number++;
		}
		else
		{
			spac++;
		}
	}
	printf("Alphabets In String Is= %d\n", alphabets);
	printf("Digits In String Is= %d\n", number);
	printf("Spacia Characters In String Is= %d\n", spac);
}

