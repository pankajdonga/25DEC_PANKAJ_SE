//Q.7 Find area of Rectangle Formula : A=wl

#include<stdio.h>
#include<conio.h>
main()
{
     float width, length, area;
     printf("Enter Value of Width = ");
     scanf("%f", &width);
     printf("Enter Value of Length = ");
     scanf("%f", &length);
     
     area= width*length;
     
     printf("Area of Rectangle is = %.2f", area);
     getch();     
}
