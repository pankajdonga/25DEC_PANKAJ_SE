//Q.36 Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
main()
{
	float i,j,k,l,m,n;
	
	printf("Enter Your Unit= ");
	scanf("%f", &i);
	j=0;
	if(i<50)
	{
		j=i*.50;
		n=j+((j*20)/100);
		printf("Your Bill Payment is= %.2f", n);
	}
	else if(i<150 && i>=50)
	{
		k=25+((i-50)*.75);
		n=k+((k*20)/100);
		printf("Your Bill Payment is= %.2f", n);
	}
	else if(i<250 && i>=150)
	{
		l=25+75+((i-150)*1.20);
		n=l+((l*20)/100);
		printf("Your Bill Payment is= %.2f", n);
	}
	else if(i>=250)
	{
		m=25+75+120+((i-250)*1.20);
		n=m+((m*20)/100);
		printf("Your Bill Payment is= %.2f", n);
	}

}

