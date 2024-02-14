//Q.32 Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
	//Basic Salary <= 10000 : HRA = 20%, DA = 80%
	//Basic Salary <= 20000 : HRA = 25%, DA = 90%
	//Basic Salary > 20000 : HRA = 30%, DA = 95%
	
#include<stdio.h>
main()
{
	int salary;
	float hra, da, total, gross_salary;
	printf("Enter Your Basic Salary= ");
	scanf("%d", &salary);
	printf("\n");
	
	if(salary<=10000)
	{
		hra=(salary*20)/100;
		da= (salary*80)/100;
		total=salary+hra+da;
		printf("Your Final Salary is= %.2f", total);
	}
	else if(salary<=20000)
	{
		hra=(salary*25)/100;
		da= (salary*80)/100;
		total=salary+hra+da;
		printf("Your Final Salary is= %.2f", total);
	}
	else if(salary>20000)
	{
		hra=(salary*30)/100;
		total= salary+hra;
		da=total+((total*95)/100);
		printf("Your Final Salary is= %.2f", da);
	}
}
