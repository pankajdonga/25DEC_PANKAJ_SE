//Q.2 Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include<stdio.h>

main()
{
	float m;
	printf("Enetr Value M= ");
	scanf("%f", &m);
	printf("\n");
	if(m>0)
	{
		printf("Value of n is 1");
	}
	else if(m==0)
	{
		printf("Value of n is 0");
	}
	else if(m<0)
	{
		printf("Value of n is -1");
	}
}
