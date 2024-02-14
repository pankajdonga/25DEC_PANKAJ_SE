//Q.13 WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	float a,b,c, minimum;
	printf("Enter Num1= ");
	scanf("%f", &a);
	printf("Enter Num2= ");
	scanf("%f", &b);
	printf("Enter Num3= ");
	scanf("%f", &c);
	printf("\n");
	minimum= (a<b)?(a<c?a:c):(b<c?b:c);
	printf("%.2f Is Minimum Number", minimum);
}
