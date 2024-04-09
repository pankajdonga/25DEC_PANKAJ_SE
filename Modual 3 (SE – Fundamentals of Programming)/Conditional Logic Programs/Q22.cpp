//Q.33 WAP to input the week number and print week day.

#include<stdio.h>
main()
{
	int num;
	printf("Enter Any Number Between (1 to 7)= ");
	scanf("%d", &num);
	printf("\n");
	
	if (num==1)
	{
		printf("Monday");
	}
	else if(num==2)
	{
		printf("Tuesday");
	}
	else if(num==3)
	{
		printf("Wednesday");
	}
	else if(num==4)
	{
		printf("Thursday");
	}
	else if(num==5)
	{
		printf("Friday");
	}
	else if(num==6)
	{
		printf("Seturday");
	}
	else if(num==7)
	{
		printf("Sunday");
	}
}
