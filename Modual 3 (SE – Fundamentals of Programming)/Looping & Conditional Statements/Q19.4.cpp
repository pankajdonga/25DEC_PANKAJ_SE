//Q.19 Patterns: Forth pettern

#include<stdio.h>
main()
{
	int i;
	char j;
	
	for (i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
			{
				printf("%c ", (char)(j+64));
			}
			else
			{
				printf("%c ", (char)(j+64));
			}
					
		}
		printf("\n");
	}
}

