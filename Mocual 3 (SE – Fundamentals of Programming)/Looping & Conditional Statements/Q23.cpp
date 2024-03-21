//Q.23 C Program to Reverse a Number Using FOR Loop


#include<stdio.h>
main()
{
	int i, j=0, k;
	
	printf("Enter Number= ");
	scanf("%d", &i);
	
	for(;i!=0; i/=10)
	{
		
		k=i%10;
		j=j*10+k;	
	}
	printf("%d", j);
}
