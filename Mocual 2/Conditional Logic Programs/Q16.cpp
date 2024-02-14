//Q.16 Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>
main()
{
	float temp;
	printf("Enter Temperature in Centigrade= ");
	scanf("%f", &temp);
	printf("\n");
	
	if(temp<0)
	{
		printf("Weather Temprature is Freezing");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("Weather Temprature is Very Cold");
	}
	else if(temp>=11 && temp<=20)
	{
		printf("Weather Temprature is Cold");
	}
	else if(temp>=21 && temp<=30)
	{
		printf("Weather Temprature is Normal");
	}
	else if(temp>=31 && temp<=40)
	{
		printf("Weather Temprature is Hot");
	}
	else
	{
		printf("Weather Temprature is Very Hot");	
	}
}
