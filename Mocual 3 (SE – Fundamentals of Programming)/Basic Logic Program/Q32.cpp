//Q.32 Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	float a,b,c,size;
	printf("Enetr Value Of A= ");
	scanf("%f", &a);
	printf("Enter Value Of B= ");
	scanf("%f", &b);
	printf("\n");
	c=a+b;
	size=sizeof(c);
	printf("Sum of A + B= %.2f", c);
	printf("\nSize of Sum is= %.0fbytes", size);
}
