//Q.6 Find the Character Is Vowel or Not

#include<stdio.h>
main()
{
	char ch;
	printf("Enetr Any Charecter(Small case)= ");
	scanf("%c", &ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("This Is Vowel Character");
	}
	else
	{
		printf("This Is Not Vowel Character");
	}
}
