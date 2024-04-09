//Q.4 WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int i,j,k,l;
	i=1;
	printf("Enter How Many Table's You want to print?= ");
	scanf("%d", &j);
	while(i<=j)
	{
		printf("\nEnter Number[%d]= ", i);
		scanf("%d", &k);
		i++;
		l=1;
		while(l<=10)
		{
			printf("\n%d * %d= %d\n", k, l, k*l);
			l++;
		}
	}
}
