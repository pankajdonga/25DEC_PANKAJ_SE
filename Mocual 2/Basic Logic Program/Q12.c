//Q.12 Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>
#include<conio.h>
main()
{
      int a, total;
      printf("Enter number of Student = ");
      scanf("%d", &a);
      
      total=a*5;
      
      printf("Total Number of required Apple is = %d", total);
      getch();      
}
