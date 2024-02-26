//Q.9 Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include<stdio.h>
main()
{
	int i,values[4],j=0;
	
	printf("Enter Any Number= ");
	
	for(i=1; i<=4; i++)
	{
		scanf("%d", &values[i]);
	}
	
	for(i=1; i<=4; i++)
	{
		j=j+values[i];
	}
	printf("%d", j);
}

