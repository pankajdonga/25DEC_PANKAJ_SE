//Q.6 WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int i,j,k,l,m;
	j=0;
	k=1;
	printf("Enter Number= ");
	scanf("%d", &m);
	i=0;
	while(i<=m)
	{
		printf("%d,", l);
		j=k;
		k=l;
		l=k+j;
		i++;
	}	
}
