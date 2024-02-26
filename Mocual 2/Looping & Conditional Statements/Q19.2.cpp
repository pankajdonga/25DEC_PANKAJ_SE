//Q.19 Patterns: Fifth pettern

#include<stdio.h>
main()
{
	int i,j,k=1;

	for (i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ", (char)(k+64));		
			k++;
		}
		printf("\n");
	}
}
