//Q.8 Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and
//Function Overloading

#include<iostream>
using namespace std;

class calculator
{
	public:
	
	void find(int a,int b)
	{
		cout<<"\n Sum of A+b= "<<a+b;
	}
	
	void find(double a,double b)
	{
		cout<<"\n Subtraction of a-b= "<<a-b;
	}
	
	void find(int a,double b)
	{
		cout<<"\n Multi of a*b= "<<a*b;
	}
	
	void find(double a,int b)
	{
		cout<<"\n Division of a/b= "<<a/b;
	}
};

main()
{
	calculator cl;
	cl.find(20,15);
	cl.find(22.3,12.5);
	cl.find(15,23.4);
	cl.find(12.2,2);
}
