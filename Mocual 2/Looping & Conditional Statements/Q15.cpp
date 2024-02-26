//Q.15 Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main()
{
	int i,j;
	j=0;
	for(i=0;i<=10;i++)
	{
		printf("+%d", i);
		j=j+i;
	}
	printf("=%d", j);
}
