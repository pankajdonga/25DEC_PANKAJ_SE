//Q.28 Convert years into days and months

#include<stdio.h>
main()
{
	float year, days, months;
	printf("Enter year= ");
	scanf("%f", &year);
	printf("\n");
	days=year*365;
	printf("\nDays = %.2f",days);
	months=year*12;
	printf("\nMonths = %.2f", months);
}
