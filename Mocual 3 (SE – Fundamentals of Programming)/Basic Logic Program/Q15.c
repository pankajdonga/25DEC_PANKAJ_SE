//Q.15 Convert school’s name in abbreviated form

#include<stdio.h>
#include<conio.h>
main()
{
      char fname[15], mname[15], lname[15];
      printf("Enter Your Full Name(firstname, middlename, lastname)= ");
      scanf("%s %s %s", &fname, &mname, lname);
      printf("%c. %c. %s", fname[0], mname[0], lname);
      getch();
}
