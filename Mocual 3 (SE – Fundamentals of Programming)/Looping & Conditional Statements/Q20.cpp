//Q.20 WAP program to print below output using for loop

#include<stdio.h>
main()
{
	int i;
	
	for (i=1; i<=50; i++)
	{
		if (i==11 || i==21 || i==31 || i==41 || i==51)
		{	
			printf("\n");
		}
		else if (i<=9)
		{
			printf("0");
		}
		printf("%d\t", i);
	}
} 
