//Q.17 Calculate person’s insurance premium based on salary

#include<stdio.h>
#include<conio.h>
main()
{
      long int salary, ins;
      printf("Enter Your Salary= Rs. ");
      scanf("%d", &salary);
      ins= (salary*10)/100;
      printf("Your Insurance Premiun is= %ld", ins);
      getch();
}
