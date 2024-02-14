//Q.35 Accept the input month number and print number of days in that month.

#include<stdio.h>
main()
{
	int month;
	printf("Enter Month= ");
	scanf("%d", &month);
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		printf("\nNumber of Days For This Month= 31 Days");
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{
		printf("\nNumber of Days For This Month= 30 Days");
	}
	else if(month==2)
	{
		printf("\nNumber of Days For This Month= 28 Days");
	}
}
