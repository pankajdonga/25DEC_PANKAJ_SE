//Q.22 Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include<stdio.h>
#include<math.h>

main()
{
      float P, r, n, Amount, CI;
      printf("Enter Value of Principle Amount= ");
      scanf("%f", &P);
      printf("Enter Annual Rate= ");
      scanf("%f", &r);
      printf("Enter Number of Years= ");
      scanf("%f", &n);
      Amount=P*(pow(1+(r/100),n));
      CI=Amount-P;
      printf("Amount is= %.2f\n", Amount);
      printf("Compound Interest is= %.2f", CI);          
}
