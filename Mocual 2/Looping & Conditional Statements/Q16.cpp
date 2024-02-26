//Q.16 Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
	int i,j,k;
	printf("Enter Any Number= ");
	scanf("%d", &j);
	i=0;
	k=0;
	while(i<=j)
	{
		printf("+%d", i);
		k=k+i;
		i++;	
	}
	printf("=%d", k);
}

