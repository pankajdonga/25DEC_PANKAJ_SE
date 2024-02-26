//Q.19 Patterns: Fifth pettern

#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<9; i++)
	{
		for(k=8; k>=i; k--)
		{
			printf(" ");
		}	
		for(j=1; j<=i; j++)
		{
			printf("* ");			
		}				
		printf("\n");
	}
}
