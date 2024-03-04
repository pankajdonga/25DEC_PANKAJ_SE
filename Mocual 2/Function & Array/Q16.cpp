//Q.16 Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main()
{
	int number[5],i,j=0;
	
	printf("Enter Any 5 Number= ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &number[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d+", number[i]);
		j=j+number[i];
	}
	
	printf("= %d", j);
}
