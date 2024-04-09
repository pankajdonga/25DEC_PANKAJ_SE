//Q.33 C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
#include<math.h>
main()
{
	int num,a,b,c;
	printf("Enter num= ");
	scanf("%d", &num);
	a=pow(num,1);
	b=pow(num,2);
	c=pow(num,3);
	printf("Power of Num1 is= %d\n", a);
	printf("Power of Num2 is= %d\n", b);
	printf("Power of Num3 is= %d\n", c);
	
}

