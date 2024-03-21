//Q.4 Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;
class Circle
{
	private:
	double radius,area,circumference;
	float pi=3.14;
	
	public:
	void getdata()
	{
		cout<<"Enter Value Of Radius= ";
		cin>>radius;
	}
	
	void printdata()
	{
		area=pi*radius*radius;
		cout<<"\nArea Of Circle Is= "<<area;
		circumference=2*pi*radius;
		cout<<"\nCircumference of Circle is= "<<circumference;
	}
		
};

main()
{
	Circle cl;
	cl.getdata();
	cl.printdata();
}
