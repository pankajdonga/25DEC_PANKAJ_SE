//Q.1 Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter First Integer= ");
	scanf("%d", &a);
	printf("Enter Second Integer= ");
	scanf("%d", &b);
	if(a==b)
	{
		printf("Both are equal");
	}
	else
	{
		printf("Both are not equal");
	}
}
