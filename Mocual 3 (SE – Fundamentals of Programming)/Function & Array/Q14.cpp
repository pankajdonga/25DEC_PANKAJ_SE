//Q.14 Perform 2D matrix array

#include<stdio.h>
main()
{
	int i,j,matrix[2][3];
	
	printf("Enter Any 6 Number= ");
	
	for(i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\n===============================\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
