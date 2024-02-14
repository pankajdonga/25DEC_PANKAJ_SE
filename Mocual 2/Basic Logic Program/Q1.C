// Q.1 Display This Information using printf
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address

#include<stdio.h>
#include<conio.h>
main()
{
	char name[15], birthdate[15], address[15];
	int age;
	printf("Enter Your Name= ");
	scanf("%s", &name);
	printf("Enter Your Birth date= ");
	scanf("%s", &birthdate);
	printf("Enter Your Age= ");
	scanf("%d", &age);
	printf("Enter Your Address= ");
	scanf("%s", &address);
	printf("\n");
	printf("Your name is = %s", name);
	printf("\nYour Birth date is = %s", birthdate);
	printf("\nYour Age is= %d", age);
	printf("\nYour Address is= %s", address);
	getch();

}
