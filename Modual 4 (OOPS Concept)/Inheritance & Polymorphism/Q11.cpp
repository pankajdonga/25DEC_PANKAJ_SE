//Q.11 Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//Rectangle: Area * 
//breadth Triangle: ½
//*Area* breadthCircle: 
//Pi * Area *Area

#include<iostream>
using namespace std;

class Calculate
{
	public:
	const float pi=3.14;
	double area;
	
	void FindArea(double r)
	{
		area=pi*(r*r);
		cout<<"\nArea of Circle= "<<area;
	}
	
	void FindArea(double l, double w)
	{
		area=w*l;
		cout<<"\n\nArea of Rectangle= "<<area;
	}
	
	void FindArea(int b, double h)
	{
		area=.5*(b*h);
		cout<<"\n\nArea of Triangle= "<<area;
	}
		
};

main()
{
	Calculate ct;
	ct.FindArea(12.5);
	ct.FindArea(10.2,15.4);
	ct.FindArea(3,2.5);
}

