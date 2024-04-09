//Q.11 WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int number;
	printf("Enter Any NUmber= ");
	scanf("%d", &number);
	printf("\n");
	(number%2==0)?printf("This Number Is Even"):printf("This Number Is Odd");
}
