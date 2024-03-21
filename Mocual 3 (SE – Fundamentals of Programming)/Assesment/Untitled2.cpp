
//? Create an application that can perform all string related operations   
//Make sure each business logic is denoted with appropriate comments and make your code interactive and represent clean and clear output on your console screen.  
//Adhere to the coding principles   
//It should be a menu driven approach, for which you are suppose to use the functions concept   
//Over Here, take string input from user and perform string operations listed below :   
//? reverse a string 
//? Concatenation  
//? Palindrome 
//? Copy  a string  
//? Length of the string  
//? Frequency of character in s string  
//? Find number of vowels and consonants  
//? Find number of blank spaces and digits    
//As given above perform the operation as per user’s choice   
//If user will not select any of the above then it should not perform any operation and  give an appropriate user friendly message   
//After performing the operation ask the user if the user wants to continue or not ? 

//1. reverse a string

#include<stdio.h>
#include<string.h>
#include<cstdlib>
string()
{
	char str[100], str2[10];
	int i,ch, restart;
	
	printf("Main Menu");
	
	printf("\n1.Equality");
	printf("\n2.String Copy");
	printf("\n3.Concat");
	printf("\n4.Show");
	printf("\n5.Reverse");
	printf("\n6.Palindrone");
	printf("\n7.Sub String");
	printf("\n8.Exit");
	
	printf("\n");
	
	printf("\nPlease Enter Your Choice= ");
	scanf("%d", &ch);
	
	printf("\n");
	if(ch<0 || ch>=8)
	{
		printf("Please Enter Valid Number");
		exit(0);
	}
	else if(ch==1)
	{
		printf("\nplease Enter The First String= ");
		scanf("%s", &str);
		printf("\nplease Enter The Second String= ");
		scanf("%s", &str2);
		if(strcmpi(str,str2)==0)
		{
			printf("\n\t--The String Is Equal");
		}
		else
		{
			printf("\n\t--The String Is Not Equal");
		}
	}
	else if(ch==2)
	{
		printf("\nplease Enter The String= ");
		scanf("%s", &str);
		printf("\n\t--The Copy String is: %s",strcpy(str2,str));
	}
	else if(ch==3)
	{
		printf("\nplease Enter First String= ");
		scanf("%s", &str);
		printf("\nplease Enter Second String= ");
		scanf("%s", &str2);
		printf("\n\t--The Concat String is: %s",strcat(str,str2));
	}
	else if(ch==4)
	{
		printf("\nplease Enter First String= ");
		scanf("%s", &str);
		printf("\n\t--The String You Entered is: %s",str);
	}
	else if(ch==5)
	{
		printf("\nplease Enter The String= ");
		scanf("%s", &str);
		printf("\n\t--The String After Reversing is: %s",strrev(str));
	}
	else if(ch==6)
	{
		printf("\nplease Enter The String= ");
		scanf("%s", &str);
		strcpy(str2,str);
		strrev(str2);
		
		if(strcmpi(str2,str)==0)
		{
			printf("\n\t--The String is Pelindrone");
		}
		else
		{
			printf("\n\t--The String is not Pelindrone");
		}
	}
	else if(ch==7)
	{
		int str_len=0;
		printf("\nplease Enter The String= ");
		gets(str);
		fgets(str, 100, stdin);
		str_len=strlen(str);
		printf("\n--The Sub String is\n");
		for(int i=0; i<str_len; i++)
		{
			if(str[i]==' ')
			{
				printf("\n");
			}
			printf("%c", str[i]);
		}
	}
	else if(ch==8)
	{
		exit(0);
	}
	
}
main()
{
	int restart;
	
	string();
	
	printf("\nDo You Want To Continue<Press 0 To Continue> ");
	scanf("%d", &restart);
	
	while(restart==0)
	{
		string();
		printf("\nDo You Want To Continue<Press 0 To Continue> ");
		scanf("%d", &restart);
	}	
}
