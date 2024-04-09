//Q.17 Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
main()
{
	int i, num[5],k,l;
	i=0;
	while(i<5)
	{
		printf("Enter Number[%d]= ", i+1);
		scanf("%d", &num[i]);
		i++;
	}
	
	printf("\n============= This Is Even Number =================\n");
	i=0;
	while(i<5)
	{
		if(num[i]%2==0)
		{
			printf("%d, ", num[i]);
		}	
		i++;
	}
	
	printf("\n============= This Is Odd Number =================\n");
	i=0;
	while(i<5)
	{
		if(num[i]%2!=0)
		{
			printf("%d, ", num[i]);
		}	
		i++;
	}
	
}
