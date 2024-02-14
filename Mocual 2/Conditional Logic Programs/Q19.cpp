//Q.19 Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
	//Unit________________________________Charge/unit
	//upto 350____________________________@1.20
	//350 and above but less than 600_____@1.50
	//600 and above but less than 800_____@1.80
	//800 and above_______________________@2.00
	//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
	
#include<stdio.h>
main()
{
	int c_id,unit;
	char name[15];
	float total1,total2,total3,total4,total5;
	printf("Enter Your Customer ID= ");
	scanf("%d", &c_id);
	printf("Enter Customer Name= ");
	scanf("%s", &name);
	printf("Enter Unit= ");
	scanf("%d", &unit);
	printf("\n");
	total1=unit*1.20;
	total2=unit*1.50;
	total3=unit*1.80+(((unit*1.80)*18)/100);
	total4=unit*2.00+(((unit*1.00)*18)/100);
	
	if(unit<350)
	{
		if(total1<=256)
		{
			printf("Total Amount to be Paid= 256.00");	
		}
		else if(unit<=350)
		{
			printf("Total Amount to be Paid= %.2f", total1);
		}
	}
	else if(unit>=350 && unit<600)
	{
		if(total2>=800)
		{
			total5=total2+((total2*18)/100);
			printf("Total Amount to be Paid= %.2f", total5);
		}
		else
		{
			printf("Total Amount to be Paid= %.2f", total2);	
		}	
		
	}
	else if(unit>=600 && unit<800)
	{
		printf("Total Amount to be Paid= %.2f", total3);
	}
	else if(unit>=800)
	{
		printf("Total Amount to be Paid= %.2f", total4);
	}
	
	
}
