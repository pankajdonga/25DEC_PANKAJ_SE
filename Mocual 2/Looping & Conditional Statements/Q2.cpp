//Q.2 WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
main()
{
	int i,number[5];
	
	for (i=1;i<=5;i++)
	{
		printf("\nEnter Number [%d]= ",i);
		scanf("%d", &number[i]);
	}
	
	for (i=1;i<=5;i++)
	{
		printf("\nNumber= %d",number[i]);
	}
}

