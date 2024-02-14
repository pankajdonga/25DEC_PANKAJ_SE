//Q.3 WAP to Find Area And Circumference of Circle

#include<stdio.h>
#include<conio.h>
main()
{
      float pi=3.14, r, area, circumference;
      printf("Enter value of r:");
      scanf("%f", &r);
      area=pi*r*r;
      printf("Value of Area is: %f", area);
      circumference=2*pi*r;
      printf("\nvalue of circumference is: %f", circumference);
      getch();      
}
