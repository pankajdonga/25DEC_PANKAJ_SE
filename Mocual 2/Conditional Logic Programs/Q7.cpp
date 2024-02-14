#include<stdio.h>
#include<conio.h>
main()
{
      float a,b,c,d,total,pr;
      printf("Enter sub1 marks= ");
      scanf("%f", &a);
      printf("Enter sub2 marks= ");
      scanf("%f", &b);
      printf("Enter sub3 marks= ");
      scanf("%f", &c);
      printf("Enter sub4 marks= ");
      scanf("%f", &d);
      
      
      
      if(a>=40 && b>=40 && c>=40 && d>=40)
      {               
	      total=a+b+c+d;
	      printf("\nTotal %.2f%%", total);
	      pr=total*100/400;
	      
	      if(pr>=70)
	      {
	               printf("\nYou pass with dist.");
	               printf("\nYou percentage is %.2f%%", pr);
	      }
	      else if(pr>=60)
	      {
	           printf("\nYou pass with first class");
	           printf("\nYou percentage is %.2f%%", pr);
	      }
	      else if(pr>=50)
	      {
	           printf("\nYou pass with second class");
	           printf("\nYou percentage is %.2f%%", pr);
	      }
	      else if(pr>=40)
	      {
	           printf("\nYou are pass");
	           printf("\nYou percentage is %.2f%%", pr);
	      }
      }
      
      else
      {
          printf("\nYou are fail");
      }     
}
