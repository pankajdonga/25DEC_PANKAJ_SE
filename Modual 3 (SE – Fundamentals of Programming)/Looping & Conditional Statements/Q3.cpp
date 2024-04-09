//Q.3 WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>
main()
{
	int i,number[10],sum,sum1;
	sum=0;
	sum1=0;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter Number [%d]= ",i);
		scanf("%d", &number[i]);
	}
	
	printf("\nThis Is Even Number\n");
	for(i=1;i<=10;i++)
	{
		if(number[i]%2==0)
		{
			printf("%d,",number[i]);
			sum+=number[i];
		}
	}
	printf("\nThis Is Odd Number\n");
	for(i=1;i<=10;i++)
	{
		if(number[i]%2!=0)
		{	
			printf("%d,",number[i]);
			sum1+=number[i];
		}
	}
	printf("\n\nSum of Even Number= %d",sum);
	printf("\nSum of Odd Number= %d",sum1);
}
