//Q.3 Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include<iostream>
using namespace std;
class Car
{
	private:
	char company[20];
	char model[20];
	int year;
	
	public:
	void getdata()
	{
		cout<<"Enter Your Car Comany Name= ";
		cin>>company;
		cout<<"Enter Car Model Detail= ";
		cin>>model;
		cout<<"Enter Year= ";
		cin>>year;
	}
	
	void printdata()
	{
		cout<<"\n==================== Car Detail's ====================\n";
		cout<<"\nCar Company name= "<<company;
		cout<<"\nCar Model= "<<model;
		cout<<"\nYear= "<<year;
	}
};

main()
{
	Car cr;
	cr.getdata();
	cr.printdata();
}
