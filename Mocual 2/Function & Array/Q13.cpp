//Q.13 WAP to accept 5 numbers from user and check entered number is even or odd using of array

main()
{
	int i, num[5];
	
	for(i=1; i<=5; i++)
	{
		printf("Enter Number[%d]= ", i);
		scanf("%d", &num[i]);
	}
	
	printf("\nThis Is Even Number\n");
	for(i=1; i<=5; i++)
	{
		if(num[i]%2==0)
		{
			printf("%d,", num[i]);
		}
	}
	
	printf("\nThis Is Odd Number\n");
	for(i=1; i<=5; i++)
	{
		if(num[i]%2!=0)
		{
			printf("%d,", num[i]);
		}
	}
}
