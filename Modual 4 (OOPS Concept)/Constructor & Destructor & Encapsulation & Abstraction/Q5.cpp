//Q.5 Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class Triangle
{
	private:
	double side_1;
	double side_2;
	double side_3;
	
	public:
	void getdata()
	{
		cout<<"Enter Side 1 Value= ";
		cin>>side_1;
		cout<<"Enter Side 2 Value= ";
		cin>>side_2;
		cout<<"Enter Side 3 Value= ";
		cin>>side_3;
	}	
	
	void printdata()
	{
		cout<<"\n==================== Triangle Shape ====================\n";
		if(side_1 + side_2 + side_3 == 180)
		{
			if(side_1 == side_2 && side_2 == side_3)
			{
				cout<<"This Triangle Shape is Equilateral";
			}
			else if(side_1 == side_2 || side_2 == side_3 || side_1 == side_3)
			{
				cout<<"This Triangle Shape is Isosceles";
			}
			else
			{
				cout<<"This Triangle Shape is Scalene";
			}
		}
		else
		{
			cout<<"Error! Enter Valid Value of All 3 Sides.....";
		}
		
	}
};

main()
{
	Triangle tr;
	tr.getdata();
	tr.printdata();
}
