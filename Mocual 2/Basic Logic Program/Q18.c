//Q.18 Calculate person’s Annual salary

#include<stdio.h>
#include<conio.h>
main()
{
      int salary, annual;
      printf("Enter your Monthly Salary: ");
      scanf("%d", &salary);
      annual=salary*12;
      printf("Your annual salary is %drs.", annual);
      getch();
}
