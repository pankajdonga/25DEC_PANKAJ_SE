//Q.24 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int n, j;
	
	printf("Enter Any Number= ");
	scanf("%d", &n);
	
	j=0;
	printf("Sum of= ");
	for (int i=1; i<=n; i++)
	{
		printf("+%d", i);
		j=j+i;
	}
	
	printf("= %d\n", j);
}
