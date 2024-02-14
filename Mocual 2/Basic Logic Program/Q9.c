//Q.9 Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
#include<conio.h>
main()
{
      float a, b, c, triangle;
      printf("Enter value of a= ");
      scanf("%f", &a);
      printf("Enter value of b= "); 
      scanf("%f", &b);
      printf("Enter value of c= ");
      scanf("%f", &c);
      
      triangle= a+b+c;
      printf("Circumference of Triangle value is= %.2f", triangle);
      getch();
}
