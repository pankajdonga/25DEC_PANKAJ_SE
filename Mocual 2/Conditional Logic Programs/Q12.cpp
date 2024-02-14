//Q.12 WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	float a,b,c, max;
	printf("Enter Num1= ");
	scanf("%f", &a);
	printf("Enter Num2= ");
	scanf("%f", &b);
	printf("Enter Num3= ");
	scanf("%f", &c);
	printf("\n");
	max= (a>b)? (a>c?a:c):(b>c?b:c);
	printf("This is max= %.2f", max);	
}
