//Q.8 WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
main()
{
	float height;
	printf("Enter Your Height In Centimeters= ");
	scanf("%f", &height);
	printf("\n");
	
	if(height<=150)
	{
		printf("Your Height Category is dwarf");
	}
	else if(height>=151 || height<=165)
	{
		printf("Your Height Category is Average");
	}
	else if(height>=166)
	{
		printf("Your Height Category is Tall");
	}
}
