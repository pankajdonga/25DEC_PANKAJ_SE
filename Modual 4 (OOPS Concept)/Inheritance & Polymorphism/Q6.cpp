//Q.6 Write a C++ Program to show access to Private Public and Protected using Inheritance
#include<iostream>
using namespace std;
//======================================== Private & Public ========================================
class Calculation
{
	private:
	double num1;
	double num2;
	public:
	void getdata(double a, double b)
	{
		a=num1;
		b=num2;	
	}
};

class Sum:public Calculation
{
	public:
	void SumData(double a, double b)
	{
		cout<<"\nSum Of A + B= "<<a+b;
	}
};

//======================================== Protected & Public ========================================

class Calculation_2
{
	protected:
	double a;
	double b;
	public:
	void getdata1()
	{
		cout<<"\n==================== Protected & Public ====================\n";
		cout<<"\nEnter Value of A: ";
		cin>>a;
		cout<<"\nEnter Value of B: ";
		cin>>b;	
	}
};

class Multi:public Calculation_2
{
	public:
	void MultiData()
	{
		cout<<"\nSum Of A * B= "<<a*b;
	}
};

main()
{
	cout<<"\n==================== Private & Public ====================\n";
	double a,b;
	cout<<"\nEnter Value of A: ";
	cin>>a;
	cout<<"\nEnter Value of B: ";
	cin>>b;
	
	Sum sm;
	sm.getdata(a,b);
	sm.SumData(a,b);
	
	Multi mt;
	mt.getdata1();
	mt.MultiData();
}
