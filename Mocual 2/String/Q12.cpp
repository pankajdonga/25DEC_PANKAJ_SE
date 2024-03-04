//Q.12 Write a program in C to find the number of times a given word 'is' appears in the given string.

#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int j,i,s,spc;
	int length=0, count=0;
	
	printf("Enter A String= ");
	fgets(str,100,stdin);
	
	length= strlen(str);
	
	for(j=0; j<=length; j++)
	{
		i=(str[j]=='i' || str[j]=='I');
		s=(str[j+1]=='s' || str[j+1]=='S');
		spc=(str[j+2]==' ' || str[j+2]=='\0');
		
		if((i && s && spc) == 1)
		{
			count++;	
		}
	}
	printf("%d", count);
	
}
