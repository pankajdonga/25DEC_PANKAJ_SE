//Q.37 WAP to show
//ii. Vowel or Consonant using switch case

#include<stdio.h>
main()
{
	char ch;
	printf("Enter Any Charecter Between a/A to z/Z= ");
	scanf("%c", &ch);
	printf("\n");
	switch(ch)
	{
		case 'a':
			printf("This Charecter Is Vowel");
		break;
		
		case 'e':
			printf("This Charecter Is Vowel");
		break;
		
		case 'i':
			printf("This Charecter Is Vowel");
		break;
		
		case 'o':
			printf("This Charecter Is Vowel");
		break;
		
		case 'A':
			printf("This Charecter Is Vowel");
		break;
		
		case 'E':
			printf("This Charecter Is Vowel");
		break;
		
		case 'I':
			printf("This Charecter Is Vowel");
		break;
		
		case 'O':
			printf("This Charecter Is Vowel");
		break;
		
		case 'U':
			printf("This Charecter Is Vowel");
		break;
		
		default:
			printf("This Charecter Is Constant");
		break;
	}
	
}
