//Q.28 1 2 3 6 9 18 27 54...

#include<stdio.h>
main()
{
	int i,j,k=1,l=1;
	
	printf("Enter Any Number= ");
	scanf("%d", &j);
	
	for(i=1; i<=j; i++) 
	{
		
		if(i%2!=0)
			{
				k=k*2;
				printf("%d ", k);
			}
			else
			{
				l=l*1.5;
				printf("%d ", l);
			}
				
	}
	
}

