//Q.30 WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	float years,days;
	printf("Enter Year= ");
	scanf("%f", &years);
	printf("\n");
	days=years*365;
	printf("\nDays = %.2f", days);
	years=days/365;
	printf("\nYears= %.2f", years);
}
