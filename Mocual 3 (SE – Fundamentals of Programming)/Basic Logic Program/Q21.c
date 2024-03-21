//Q.21 21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,c;
      printf("Enter Value of a: ");
      scanf("%d", &a);
      printf("Enter Value of b: ");
      scanf("%d", &b);
      printf("\nusing 3rd variable");
      c=a;
      a=b;
      b=c;
      printf("\nSwap Value of a=%d", a);
      printf("\nSwap Value of b=%d", b);
      printf("\nwithout using 3rd variable");
      a=a+b;
      a=a-b;
      b=a-b;
      printf("\nSwap Value of a=%d", a);
      printf("\nSwap Value of b=%d", b);
      getch();      
}
