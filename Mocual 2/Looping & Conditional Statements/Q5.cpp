//Q.5 WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter Any Number= ");
	scanf("%d", &j);
	i=1;
	for(i=1;i<=j;i++)
	{
		printf("*%d", i);
		n=n*i;	
	}
	printf("=%d", n);
}
