//Q.8 Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement
//using of aggregation

#include<iostream>
#include<string.h>
using namespace std;
class Address
{
	public:
	char street[20];
	char city[20];
	char state[20];
	char country[20];
	
	
	void s_address(char street[20], char city[20], char state[20], char country[20])
	{
		strcpy(this->street,street);
		strcpy(this->city,city);
		strcpy(this->state,state);
		strcpy(this->country,country);
	}

};

class Students:public Address
{
	public:
	Address *SA;
	char name[20];
	int Class;
	int roll_number;
	int marks;
	
	Students(Address *SA, char name[], int Class, int roll_number, int marks)
	{
		this->SA=SA;
		strcpy(this->name,name);
		this->Class=Class;
		this->roll_number=roll_number;
		this->marks=marks;
	}
	
	void display();
};

void Students::display()
{	
	cout<<"\nName: "<<name;
	cout<<"\nAddress: "<<SA->street<<","<<SA->city<<","<<SA->state<<","<<SA->country;
	cout<<"\nClass: "<<Class;
	cout<<"\nRoll Number: "<<roll_number;
	cout<<"\nMarks: "<<marks;
	cout<<"\n\n=====================================================================\n";
}

main()
{
	Address a1,a2;
	a1.s_address("2", "Rajkot", "Gujrat", "India");
	a2.s_address("4", "Morbi", "Rajkot", "India");
	Students s1(&a1, "Pankaj", 12, 3, 98);
	Students s2(&a2, "Rahul", 10, 5, 45);
	
	s1.display();
	s2.display();
}

