//Q.11 Accept 5 names from user at run time.

#include<stdio.h>
main()
{
	char name[6][15];
	int i;
	for (i=1; i<=5; i++)
	{
		printf("Enter Your Name[%d]= ", i);
		scanf("%s", &name[i]);
	}	
	
	for (i=1; i<=5; i++)
	{
		printf("Your Name[%d]= %s\n",i, name[i]);
	}
	
}
