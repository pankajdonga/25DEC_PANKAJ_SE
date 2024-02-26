//Q.3 WAP to find reverse of string using recursion

#include<stdio.h>
reverse_string()
{
	char str;
	scanf("%c", &str);
	
	if(str != '\n')
	{
		reverse_string();
		printf("%c", str);
	}
		
}
main()
{
	printf("Enter Sentance= ");
	reverse_string();
}
