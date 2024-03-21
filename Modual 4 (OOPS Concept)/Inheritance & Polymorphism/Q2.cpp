//Q.2 Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;
class Find_area
{
	public:
	double width, length, area;
	
	void getdata()
	{
		cout<<"Enter Value Of Width= ";
		cin>>width;
		cout<<"Enter Value Of Height= ";
		cin>>length;
	}
};

class Calculate:public Find_area
{
	public:
	
	void printdata()
	{
		area=width*length;
		cout<<"Area Of Rectangle= "<<area;
	}
};
main()
{
	Calculate cal;
	cal.getdata();
	cal.printdata();
}
