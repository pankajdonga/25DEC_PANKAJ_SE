//Q.5 WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>
main()
{
	int i,ch,j,k,input1[20],input2[5];
	
	printf("Enter How Many Number Do You Want To Enter= ");
	scanf("%d", &ch);
	
	printf("Enter Any %d Number= ", ch);
	for(i=0; i<ch; i++)
	{
		scanf("%d", &input1[i]);
	}
	
	printf("\n===================================\n");
	
	printf("Enter Any %d Number= ", ch);
	for(i=0; i<ch; i++)
	{
		scanf("%d", &input2[i]);
	}

	printf("\n===================================\n");
	printf("\nNumber In Ascending Order\n");
	
	for(i=0; i<ch; i++)
	{
		for(j=i+1;j<ch;j++)
		{
			if(input1[i]>input1[j])
			{
				k=input1[i];
				input1[i]=input1[j];
				input1[j]=k;
			}
		}
		
	}
	
	for(i=0; i<ch; i++)
	{
		printf("%d, \t", input1[i]);
	}
	
	
	printf("\n===================================\n");
	printf("\nNumber In Descending Order\n");
	
	for(i=0; i<ch; i++)
	{
		for(j=i+1; j<ch; j++)
		{
			if(input2[i]<input2[j])
			{
				k=input2[i];
				input2[i]=input2[j];
				input2[j]=k;
			}
		}
	}
	
	for(i=0; i<ch; i++)
	{
		printf("%d, \t", input2[i]);
	}
}
