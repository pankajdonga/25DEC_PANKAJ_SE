//Q.27 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>
main()
{
	int i,j,k,l=1,m=2;
	printf("Enetr Any Number= ");
	scanf("%d", &j);
	for (i=1; i<=j; i++)
	{
		for (k=1; k<=2; k++)
		{
			if(m%2==0)
			{
			 	printf("%d/%d - ", l,m);
			}
			else 
			{
				printf("%d/%d + ", l,m);
			}
			
			l++;
			m=l+1;
		}
		//printf("\n");
	}
}
