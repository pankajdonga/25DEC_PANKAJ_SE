//Q.19 Calculate compound interest

#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
      float P, r, n, A, CI;
      printf("Enter Value of Principle Amount= ");
      scanf("%f", &P);
      printf("Enter Annual Rate= ");
      scanf("%f", &r);
      printf("Enter Number of Years= ");
      scanf("%f", &n);
      A=P*(pow(1+(r/100),n));
      CI=A-P;
      printf("Compound Interest is= %.2f", CI);
      getch();            
}
