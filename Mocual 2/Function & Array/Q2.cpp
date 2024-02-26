//Q.2 WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
int number;
float f_value,s_value;
menu()
{
	printf("Enter (1=Addition / 2=Substraction / 3=Multiplication / 4=Division)= ");
	scanf("%d", &number);
}

input_value()
{
	printf("Enter First Value= ");
	scanf("%f", &f_value);
	printf("Enter Second Value= ");
	scanf("%f", &s_value);
}

main()
{
	menu();
	input_value();
	
	switch(number)
		{
			case 1:
				printf("Addition Of %.2f+%.2f=%.2f", f_value,s_value,f_value+s_value);
			break;	
			
			case 2:
				printf("Substraction Of %.2f-%.2f=%.2f", f_value,s_value,f_value-s_value);
			break;
			
			case 3:
				printf("Multiplication Of %.2f*%.2f=%.2f", f_value,s_value,f_value*s_value);
			break;
			
			case 4:
				printf("Division Of %.2f/%.2f=%.2f", f_value,s_value,f_value/s_value);
			break;
			
			default:
				printf("Error! Enter Valid Number");
			break;		
		}	
}
