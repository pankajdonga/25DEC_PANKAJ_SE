//Q.15 Write a C program to determine eligibility for admission to a professional course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths andPhysics >=140 -------
//Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include<stdio.h>
main()
{
	int maths, physics, chemistry, total3, total2;
	printf("Enter Marks Of Maths= ");
	scanf("%d", &maths);
	printf("Enter Marks Of Physics= ");
	scanf("%d", &physics);
	printf("Enter Marks Of Chemistry= ");
	scanf("%d", &chemistry);
	printf("\n");
	total3=maths+physics+chemistry;
	printf("\nYour Three Sub.(Maths+Physics+Chemistry) Total is= %d", total3);
	total2=maths+physics;
	printf("\nYour Two Sub.(Maths+Physics) Total is= %d\n\n", total2);
	if(total3>=190)
	{
		if(total2>=140)
		{
			if(maths>=65 && physics>=55 && chemistry>=50)
			{
				printf("You are Eligible for This Course");
			}
		}
	}
	else
	{
		printf("You are Not Eligible for This Course");
	}
}
