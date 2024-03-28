//Q.10 Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;

class mystring
{
	public:
	char str[20];
	
	mystring (char str[])
	{
		strcpy(this->str,str);
	}
	
	mystring(){}
	mystring operator+(mystring k);
	void display();
};

void mystring::display()
{
	cout<<str;
}

mystring mystring::operator+(mystring k)
{
	mystring temp;
	
	strcpy(temp.str, str);
	strcat(temp.str,k.str);
	
	return temp;
}
main()
{
	mystring m1("Hello");
	mystring m2("World");
	mystring m3;
	m3=m1+m2;
	m3.display();
}
