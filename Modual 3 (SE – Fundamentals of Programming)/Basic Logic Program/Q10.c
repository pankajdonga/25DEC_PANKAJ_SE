//Q.10 find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
#include<conio.h>
main()
{
      float w, h, l, A, wl, hl, hw;
      printf("Enter Value of W= ");
      scanf("%f", &w);
      printf("Enter Value of h= ");
      scanf("%f", &h);
      printf("Enter Value of l= ");
      scanf("%f", &l);
      
      wl= w*l;
      hl= h*l;
      hw= h*w;
      
      A= 2*(wl+hl+hw);
      
      printf("Area of a Rectangular Prism is = %.2f", A);
      getch();
}
