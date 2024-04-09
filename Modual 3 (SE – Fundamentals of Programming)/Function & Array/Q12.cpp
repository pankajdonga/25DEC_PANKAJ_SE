//Q.12 WAP to accept 5 students name and store it in array

#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	
	printf("Enter 5 Name= ");
	for(i=0; i<5; i++)
	{
		scanf("%s", &name[i]);
	}
	
	printf("\n=================================\n")
	
	for(i=0;i<5;i++)
	{
		printf("%s\n", name[i]);
	}
}

