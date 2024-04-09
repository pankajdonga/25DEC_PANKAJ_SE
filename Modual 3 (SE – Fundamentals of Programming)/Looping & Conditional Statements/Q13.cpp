//Q.13 calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int i,j,k;
	
	printf("Enter Number= ");
	scanf("%d", &j);
	i=1;
	while(i<=j)
	{
		printf("*%d", i);
		k=k*i;
		i++;
	}
	printf("=%d", k);
}

