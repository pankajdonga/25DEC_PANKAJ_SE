//Q.6 Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private:
	char name[20];
	int age;
	char country[20];
	
	public:
	void getdata()
	{
		cout<<"Enter Your Name= ";
		cin>>name;
		cout<<"Enter Your Age= ";
		cin>>age;
		cout<<"Enter Your Country= ";
		cin>>country;
	}
	
	void printdata()
	{
		cout<<"\nName= "<<name;
		cout<<"\nAge= "<<age;
		cout<<"\nCountry= "<<country;
	}
};

main()
{
	Person per;
	per.getdata();
	per.printdata();
}
