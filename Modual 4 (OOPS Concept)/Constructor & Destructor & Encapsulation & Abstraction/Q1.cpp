//Q.1 Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;
class Calculation
{
	public:
	double a,b,multi,cubic;
	
	void GetData();
	void MultiData();
	void CubicData();
};

inline void Calculation :: GetData()
{
	cout<<"\nEnter Value of A: ";
	cin>>a;
	cout<<"\nEnter Value of B: ";
	cin>>b;
}

inline void Calculation :: MultiData()
{
	cout<<"\nMultiplication of A * B: "<<a*b;
}

inline void Calculation :: CubicData()
{
	cout<<"\nCubic Value of A: "<<a*a*a;
	cout<<"\nCubic Value of B: "<<b*b*b;
}

main()
{
	Calculation cl;
	cl.GetData();
	cl.MultiData();
	cl.CubicData();
}

