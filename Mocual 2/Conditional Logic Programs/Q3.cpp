//Q.3 WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year,leap_year1,leap_year2,leap_year3;
	printf("Enter Year= ");
	scanf("%d", &year);
	leap_year1=year%400;
	printf("%d\n",leap_year1);
	leap_year2=year%100;
	printf("%d\n",leap_year2);
	leap_year3=year%4;
	printf("%d\n",leap_year3);
	if(leap_year1==0)
	{
		printf("This year is Leap Year\n");
	}
	else if(leap_year2==0)
	{
		printf("This Year is Not Leap Year\n");
	}
	else if(leap_year3==0)
	{
		printf("This Year is Leap Year\n");
	}
	else
	{
		printf("This Year is Not Leap Year\n");
	}
}
