// Q.6 Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
#include<conio.h>
main()
{
      float b, h, area;
      printf("Enter value of Base:");
      scanf("%f", &b);
      printf("Enter value of Height:");
      scanf("%f", &h);
      area=(b*h)/2;
      printf("Area of triangle is= %.2f", area);
      getch();      
}
