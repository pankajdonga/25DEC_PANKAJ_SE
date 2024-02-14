//Q.10 WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
main()
{
	double num;
	printf("Enetr Any Number= ");
	scanf("%lf", &num);
	printf("\n");
	if(num>0)
	{
		printf("This Number is Positive");
	}
	else if(num == 0)
	{
		printf("This Number is Zero");
	}
	else if(num<0)
	{
		printf("This Number is Negative");
	}

}
