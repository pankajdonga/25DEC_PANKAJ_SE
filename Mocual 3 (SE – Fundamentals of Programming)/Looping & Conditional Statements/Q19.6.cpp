//Q.19 Patterns: Sixth pettern

#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=8; i++)
	{
		for(j=1; j<i; j++)
		{
			printf("* ");	
		}
		printf("\n");
	}
	for(i=1; i<=8; i++)
	{
		for(k=7; k>i; k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
