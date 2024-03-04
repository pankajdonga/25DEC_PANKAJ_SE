//Q.14 Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int number[5], i,j;
	
	printf("Enter Any 5 Numbers= ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &number[i]);
	}
	
	for(i=0; i<5; i++)
	{
		j=1;
		for(number[i]; number[i]>=1;number[i]--)
		{
			printf("%d*", number[i]);
			j=j*number[i];	
		}
		printf("= %d", j);
		printf("\n");		
	}	
}
