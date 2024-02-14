//Q.4 WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
#include<math.h>
main()
{
	char oprator;
	float a, b;
	printf("Enter an Oprator (+, -, *, /, %): ");
	scanf("%c", &oprator);
	printf("Eneter num1 and num2= ");
	scanf("%f %f", &a, &b);
	printf("\n")
	if(oprator == '+')
	{
		printf("Sum of num1 + num2= %.2f", a+b);
	}
	else if(oprator == '-')
	{
		printf("Substraction of num1 - num2= %.2f", a-b);
	}
	else if(oprator == '*')
	{
		printf("Multiplication of num1 * num2= %.2f", a*b);
	}
	else if(oprator == '/')
	{
		printf("Division of num1 / num2= %.2f", a/b);
	}
	
}

