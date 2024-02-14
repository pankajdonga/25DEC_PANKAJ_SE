//Q.23 WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
main()
{
      int a,b;
      printf("Enter value of a=");
      scanf("%d", &a);
      printf("Enter value of b=");
      scanf("%d", &b);
      //swap with multiplication
      a=a*b;
      b=a/b;
      a=a/b;
      printf("Value of a %d", a);
      printf("\nValue of b %d", b);       
}
