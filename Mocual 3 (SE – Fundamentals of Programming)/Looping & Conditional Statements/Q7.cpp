//Q.7 WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746


#include<stdio.h>
main()
{
	int i,values[5];
	
	printf("Enter Any Number= ");
	for(i=1; i<=5; i++)
	{
		scanf("%d", &values[i]);
	}
	
	for (i=5; i>=1; i--)
	{
		printf("%d", values[i]);
	}
}
