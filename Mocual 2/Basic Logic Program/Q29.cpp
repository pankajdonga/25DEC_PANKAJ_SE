//Q.29 Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	float minutes,seconds,hours;
	printf("Enetr minutes= ");
	scanf("%f", &minutes);
	printf("\n");
	seconds=60*minutes;
	printf("\nSeconds= %.2f", seconds);
	hours=minutes/60;
	printf("\nHours= %.2f", hours);
}
