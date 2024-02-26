//Q.26 (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int i,j,k;
	printf("Enter Any Name= ");
	scanf("%d", &j);
	for (i=1; i<=j; i++)
	{
		printf("(");
		for (k=1; k<=i; k++)
		{
			
			if(k==1)
			{
				printf("%d",k);
			}	
			else
			{
				printf("+%d",k);
			}	
		}
		if(i==5)
		{
			printf(")");
		}
		else
		{
			printf(")+");
		}
		
	}
}
