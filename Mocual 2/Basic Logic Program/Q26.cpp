//Q.26 Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float c,f;
	printf("Enetr Value of Fahrenheit= ");
	scanf("%f", &f);
	c=(f-32)*5/9;
	printf("Celsius Temperature is = %.2fC", c);
}

