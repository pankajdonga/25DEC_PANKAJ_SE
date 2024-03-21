//Q.3. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class Person
{
	public:
	char s_name[20];
	int s_age;
	
	void s_getdata()
	{
		cout<<"Enter Student Name= ";
		cin>>s_name;
		cout<<"Enter Student Age= ";
		cin>>s_age;
	}	
};
class Student 
{
	public:
	int percentage;
	void s_percentage()
	{
		cout<<"Enter Student percentage= ";
		cin>>percentage;
	}	
};
class Teacher
{
	public:
	char t_name[20];
	long int salary;
	
	void t_getdata()
	{
		cout<<"Enter Teacher Name= ";
		cin>>t_name;
		cout<<"Enter Teacher Salary= ";
		cin>>salary;
	}
};

class Output:public Person,public Student,public Teacher
{
	public:
	
	void printdata()
	{
		cout<<"\n===============================================\n";
		cout<<"\nStudent Name= "<<s_name;
		cout<<"\nStudent Age= "<<s_age;
		cout<<"\nStudent Percentage= "<<percentage<<"%";
		cout<<"\nTeacher Name= "<<t_name;
		cout<<"\nTeacher Salary= "<<salary;
	}
};

main()
{
	Output ot;
	ot.s_getdata();
	ot.s_percentage();
	ot.t_getdata();	
	ot.printdata();
}
