//Q.17 Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main()
{
	float a1, a2,a3,total;
	printf("Enter Value for First Angle= ");
	scanf("%f", &a1);
	printf("Enter Value for Second Angle= ");
	scanf("%f", &a2);
	printf("Enter Value for Third Angle= ");
	scanf("%f", &a3);
	total=a1+a2+a3;
	printf("\n");
	if(total==180)
	{
		printf("Yes Triengle can be Formed");
	}
	else
	{
		printf("No Triengle can't be Formed");
	}
}

