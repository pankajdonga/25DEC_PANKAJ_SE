//Q.8 Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

int main() {
	
  int i,j,values[5], max=0, min=0;

  	printf("Enter 5 integers: ");
  	
  	for(i=1; i<=5; i++)
  	{
  		scanf("%d", &values[i]);
	}
	
	for(i=1; i<=5; i++)
	{
		if(values[i]>max)
		{
			max=values[i];
		}	
	}
	printf("Max Number is= %d\n", max);

}
