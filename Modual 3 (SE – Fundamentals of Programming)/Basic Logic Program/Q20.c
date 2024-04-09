//Q.20 Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include<stdio.h>
#include<conio.h>
main()
{
            int salary, ins, loan, final;
            printf("Enter Your MOnthly Salary= ");
            scanf("%d", &salary);
            ins=(salary*10)/100;
            loan=(salary*10)/100;
            final=salary-(ins+loan);
            printf("Your Remaining Salary is= %d", final);
            getch();
}
