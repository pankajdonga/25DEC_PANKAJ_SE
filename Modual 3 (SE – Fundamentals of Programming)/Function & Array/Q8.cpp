//Q.8 Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address andage
//b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage

#include<stdio.h>
struct employee
{
	int empno;
	int age;
	char empname[20];
	char address[20];
};
main()
{
	employee emp[4];
	int i,j;
	
	for(i=0;i<5;i++)
	{
		printf("Enter [%d] Employee Number= ", i+1);
		scanf("%d", &emp[i].empno);
		printf("Enter [%d] Employee Age= ", i+1);
		scanf("%d", &emp[i].age);
		printf("Enter [%d] Employee Name= ", i+1);
		scanf("%s", &emp[i].empname);
		printf("Enter [%d] Employee Address= ", i+1);
		scanf("%s", &emp[i].address);
		printf("\n============================================\n");
	}
	
	for(i=0;i<5;i++)
	{
		printf("[%d] Employee Number= %d\n", i+1,emp[i].empno);
		printf("[%d] Employee Age= %d\n", i+1,emp[i].age);
		printf("[%d] Employee Name= %s\n", i+1,emp[i].empname);
		printf("[%d] Employee Number= %s\n", i+1,emp[i].address);
		printf("\n============================================\n");
	}
}
