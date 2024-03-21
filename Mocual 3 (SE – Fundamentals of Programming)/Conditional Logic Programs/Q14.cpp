//Q.14 WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	float a,b,c,large;
	printf("Enter Num1= ");
	scanf("%f", &a);
	printf("Enter Num2= ");
	scanf("%f", &b);
	printf("Enter Num3= ");
	scanf("%f", &c);
	printf("\n");
	if(a>b && a>c)
	{
		printf("%.2f Number is largest", a);
	}
	else if(b>a && b>c)
	{
		printf("%.2f Number is largest", b);
	}
	else if(c>a && c>b)
	{
		printf("%.2f Number is largest", c);
	}
	
}

