//Q.2 Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;
class calculator
{
	public:
	
	calculator(double a, double b)
	{
		cout<<"==================== Calculation ====================";
		cout<<"\nAddition Of A + B= "<<a+b;
		cout<<"\nSubtraction Of A - B= "<<a-b;
		cout<<"\nDivision Of A / B= "<<a/b;
		cout<<"\nMultiplication Of A * B= "<<a*b;
	}
	
};

main()
{
	double a,b;
	cout<<"Enter value Of A= ";
	cin>>a;
	cout<<"Enter value Of B= ";
	cin>>b;
	
	calculator cl(a,b);
}
