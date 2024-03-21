//Q.27 Convert days into months

#include<stdio.h>
main()
{
	float days, month;
	printf("Enter Days= ");
	scanf("%f", &days);
	printf("\n");
	month=days/30;
	printf("Month = %.2f", month);
}
