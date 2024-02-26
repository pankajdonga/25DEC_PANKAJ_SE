//Q.1 Write a program to find out the max number from given array using function

#include<stdio.h>
int i,j,max,input[100];

max_number()
{	
	printf("How Many Number Do you Want to Enter= ");
	scanf("%d",&j);	
	
	printf("Enter Any [%d] Number= ",j);
	for (i=0; i<j; i++)
	{
		scanf("%d", &input[i]);
	}
	
	for (i=0; i<input[i]; i++)
	{
		if(input[0]<input[i])
		{
			input[0]=input[i];	
			max=input[0];
		}	
	}
	printf("\n===================================\n");
	printf("Max Number Is= %d", max);
}


main()
{
	max_number();	
}
