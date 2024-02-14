//Q.5 Check Number Is Positive or Negative

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
	else if(num<0)
	{
		printf("This Number is Negative");
	}

}
