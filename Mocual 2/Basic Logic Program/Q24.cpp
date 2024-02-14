//Q.24 Accept 5 employees name and salary and count average and total salary.

#include<stdio.h>
main()
{
	char name1[10], name2[10], name3[10], name4[10], name[10];
	int salary1, salary2, salary3, salary4, salary5, total, average;
	float x;
	printf("Enter Your Name: ");
	scanf("%s", &name1);
	printf("Enter Your Monthly Salary: ");
	scanf("%d", &salary1);
	printf("\nEnter Your Name: ");
	scanf("%s", &name2);
	printf("Enter Your Monthly Salary: ");
	scanf("%d", &salary2);
	printf("\nEnter Your Name: ");
	scanf("%s", &name3);
	printf("Enter Your Monthly Salary: ");
	scanf("%d", &salary3);
	printf("\nEnter Your Name: ");
	scanf("%s", &name4);
	printf("Enter Your Monthly Salary: ");
	scanf("%d", &salary4);
	printf("\nEnter Your Name: ");
	scanf("%s", &name5);
	printf("Enter Your Monthly Salary: ");
	scanf("%d", &salary5);
	printf("\n");
	total=salary1+salary2+salary3+salary4+salary5;
	printf("\nTotal Salary is = %dRs.", total);
	average=total/5;
	x=float(average);
	printf("\nAverage Salary is = %.2fRs.", x);
	
	
}
