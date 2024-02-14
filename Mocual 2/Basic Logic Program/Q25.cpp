//Q.25 Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int a,b,c,d,e,total,average;
	float x;
	printf("Expance of House Rent= ");
	scanf("%d", &a);
	printf("Expance of Medicine= ");
	scanf("%d", &b);
	printf("Expance of Insurance premium= ");
	scanf("%d", &c);
	printf("Expance of Electricity Bill= ");
	scanf("%d", &d);
	printf("Expance of Mobile Recharge= ");
	scanf("%d", &e);
	printf("\n");
	total=a+b+c+d+e;
	average=total/5;
	x=float(average);
	printf("Youre Average Expenses is= %.2fRs.", x);
}
