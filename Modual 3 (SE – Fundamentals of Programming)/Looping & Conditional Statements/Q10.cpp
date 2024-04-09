//Q.10 Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include<stdio.h>
main()
{
	int i,j, values[5];
	
	printf("Enter Any Number= ");
	
	for(i=1; i<=4; i++)
	{
		scanf("%d", &values[i]);
	}

	for(i=1; i<=4; i++)
	{
		j=values[1]+values[4];
	}
	printf("%d", j);

}
