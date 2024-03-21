 //Q.8 Find circumference of Rectangle formula : C = 2l + 2w
 
 #include<stdio.h>
 #include<conio.h>
 main()
 {
       float l, w, C;
       printf("Enter Value of l= ");
       scanf("%f", &l);
       printf("Enter Value of w= ");
       scanf("%f", &w);
       
       C= (2*l)+(2*w);
       
       printf("Circumference of Rectangle value is = %.2f", C);
       getch();
 }
