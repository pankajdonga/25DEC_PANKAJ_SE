//Q.15 Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
#include<string.h>
main()
{
	char str[100],strn[20][20];;
	int i,j=0,k=0,m=0,n=0,max,min;
	
	printf("Enter A String= ");
	fgets(str, 100, stdin);
	
	for(i=0; str[i]!='\0'; i++)
	{
		
		if(str[i] == ' ')
		{
			strn[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			strn[j][k]=str[i];
			k++;
		}

	}
	strn[j][k]='\0';
	max=strlen(strn[0]);
	min=strlen(strn[0]);
	for(i=0;i<=j;i++)
	{
		if(max<strlen(strn[i]))
		{
			m=i;
		}
		if(min>strlen(strn[i]))
		{
			n=i;
		}
	}
	
	printf("Largest Word is= %s\n", strn[m]);
	printf("Smallest Word is= %s", strn[n]);
	
}
