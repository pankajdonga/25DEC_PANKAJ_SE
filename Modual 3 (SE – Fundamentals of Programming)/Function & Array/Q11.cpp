//Q.11 WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	printf("Enetr Any 5 Name= ");
	for(i=1; i<=5; i++)
	{
		scanf("%s", name[i]);
	}
	printf("\n");
	for(i=5; i>=1; i--)
	{
		printf("%s\n", name[i]);
	}
	
}
