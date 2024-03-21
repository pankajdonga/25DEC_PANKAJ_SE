//Q.6 Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee performance. Using of constructor

#include<iostream>
using namespace std;
class Employee
{
	private:
	char name[20];
	int employee_id,performance;
	long int salary;
	public:
	Employee()
	{
		cout<<"Enter Employee Name= ";
		cin>>name;
		cout<<"Enter Employee ID= ";
		cin>>employee_id;
		cout<<"Enter Employee Performance Rating (1 To 5)= ";
		cin>>performance;
		cout<<"Enter Employee Salary= ";
		cin>>salary;
	
		cout<<"==================== Employee Detail ====================";
		
		if(performance>=0 && performance<=5)
		{
			cout<<"\nEmployee Name= "<<name;
			cout<<"\nEmployee ID= "<<employee_id;
			cout<<"\nEmployee Performance= "<<performance;
			if(performance == 0)
			{
				cout<<"\nEmployee Salary= "<<salary;
			}
			else if(performance == 1)
			{
				salary=salary+1000;
				cout<<"\nEmployee Salary= "<<salary;
			}
			else if(performance == 2)
			{
				salary=salary+2000;
				cout<<"\nEmployee Salary= "<<salary;
			}
			else if(performance == 3)
			{
				salary=salary+3000;
				cout<<"\nEmployee Salary= "<<salary;
			}
			else if(performance == 4)
			{
				salary=salary+4000;
				cout<<"\nEmployee Salary= "<<salary;
			}
			else if(performance == 5)
			{
				salary=salary+5000;
				cout<<"\nEmployee Salary= "<<salary;
			}
		}
		else
		{
			cout<<"\nError! Enter Valid Performance Rating....";
		}
		
	}
};

main()
{
	Employee emp;
}
