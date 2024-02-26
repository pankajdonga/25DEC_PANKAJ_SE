//Q.4 WAP to find factorial using recursion

#include<stdio.h>
int input_digit(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*input_digit(n-1));
	}
	
	
}

main()
{
	int n;
	printf("Enter Which Number Of Factorial Do You Want?= ");
	scanf("%d", &n);
	printf("%d", input_digit(n));
}
