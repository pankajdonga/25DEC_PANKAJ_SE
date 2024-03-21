//Q.15 Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
main()
{
	int number[5], i,j,k;
	
	printf("Enter Any 5 number= ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &number[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(number[i]>number[j])
			{
				k=number[i];
				number[i]=number[j];
				number[j]=k;
			}
		}
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d", number[i]);
	}
}
