//Q.22 Accept 3 numbers from user using while loop and check each numbers palindrome

#include<stdio.h>
main()
{
	int i,reverse[3],k,l,number[3];
	
	printf("Enetr Any 3 Number= ");
	for (i=0; i<3; i++)
	{
		scanf("%d", &number[i]);	
	}
	
	for(i=0; i<3; i++)
	{
		l=number[i];
		reverse[i]=0;
		for(number[i]; number[i]!=0; )
		{
			k=number[i]%10;
			reverse[i]=reverse[i]*10+k;
			number[i]/= 10;
		}
		printf("\n=================================\n");
		if(l==reverse[i])
		{
			printf("This Number Is Palindrome");
		}
		else
		{
			printf("This Number Is Not Palindrome");
		}
		printf("\n");
	}	
	
}


