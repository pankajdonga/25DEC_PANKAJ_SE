//Q.5 Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle
{
	private:
	double length,width,area,perimeter;
		
	public:
	void getdata()
	{
		cout<<"Enter Value Of With= ";
		cin>>width;
		cout<<"Enter Value Of Length= ";
		cin>>length;
	}
	
	void calculate()
	{
		area=width*length;
		perimeter=2*(width+length);
		cout<<"\nArea of Rectangle= "<<area;
		cout<<"\nPerimeter of Rectangle= "<<perimeter;
	}
};

main()
{
	Rectangle rec;
	rec.getdata();
	rec.calculate();
}
