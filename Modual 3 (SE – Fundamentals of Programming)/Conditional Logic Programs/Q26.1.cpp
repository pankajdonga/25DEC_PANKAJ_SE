//Q.37 WAP to show
//i. Monday to Sunday using switch case

#include<stdio.h>
main()
{
	int ch;
	printf("Enter Any Number Between 1 To 7= ");
	scanf("%d", &ch);
	printf("\n");
	
	switch(ch)
	{
		case 1:
			printf("Monday");
		break;
		
		case 2:
			printf("Tuesday");
		break;
		
		case 3:
			printf("Wednesday");
		break;
		
		case 4:
			printf("Thursday");
		break;
		
		case 5:
			printf("Friday");
		break;
		
		case 6:
			printf("Seturday");
		break;
		
		case 7:
			printf("Sunday");
		break;
		
		default:
			printf("Error.......Enter Valid Number");
		break;	
	}
}
