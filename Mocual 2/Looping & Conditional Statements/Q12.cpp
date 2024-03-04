//Q.12 Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<math.h>
main()
{
	int i,j,k,num,ch,sum=0;;
	
	printf("How Many Digit Do You Want To Enter= ");
	scanf("%d", &ch);
	
	printf("Enter Any Number= ");
	scanf("%d", &num);
	k=num;
	
	for(i=0; num!=0; i++)
	{
		j=num%10;
		sum+=pow(j,ch);
		num/=10;
	}
	if(k == sum)
	{
		printf("This Number Is Armstrong Number");
	}
	else
	{
		printf("This Number Is Not Armstrong Number");
	}
}
