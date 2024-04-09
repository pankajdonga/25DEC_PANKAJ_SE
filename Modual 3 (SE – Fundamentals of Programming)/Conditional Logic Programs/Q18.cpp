//Q.18 Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
	float cost_price,selling_price,profit,loss;
	printf("Enter Cost_Price= ");
	scanf("%f", &cost_price);
	printf("Enter Selling_Price= ");
	scanf("%f", &selling_price);
	profit=selling_price-cost_price;
	loss=cost_price-selling_price;
	printf("\n");
	if(cost_price<selling_price)
	{
		printf("Profit= %.2f", profit);
	}
	else
	{
		printf("\nLoss= %.2f", loss);	
	}
	
	
}
