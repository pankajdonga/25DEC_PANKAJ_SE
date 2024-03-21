//Q.25 (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int i,j,l,m;
	
	printf("Enter Any Number= ");
	scanf("%d", &j);
	l=1;
	m=0;
	for (i=1; i<=j; i++)
	{
		printf("+(%d*%d)",i,l);
		m=m+(i*l);
		l++;
	}
	printf("=%d",m);
}
