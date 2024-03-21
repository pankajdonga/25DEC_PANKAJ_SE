// Q.2  Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
#include<conio.h>
main()
{
      float a, b, addition, substraction, multiplication, division;
      int modulo;
      printf("Enter First Value:");
      scanf("%f", &a);
      printf("Enter Secound Value:");
      scanf("%f", &b);
      addition=a+b;
      substraction=a-b;
      multiplication=a*b;
      division=a/b;
      //modulo=a%b;
      printf("addition of A and B is: %f", addition);
      printf("\nsubstraction of A and B is: %f", substraction);
      printf("\nmultiplication of A and B is: %f", multiplication);
      printf("\ndividion of A nad b is: %f", division);
      //printf("\nModulo of A and b is: %d", a%b);
      getch();
}
      
