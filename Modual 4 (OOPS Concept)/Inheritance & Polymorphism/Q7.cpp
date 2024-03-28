//Q.7 Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream>
using namespace std;

class A
{
	public:
	double a,b;
	
	A()
	{
		cout<<"Enter Value For A= ";
		cin>>a;
		cout<<"Enter Value For B= ";
		cin>>b;
	}
};

class Sum:public A
{
	public:
	Sum()
	{
		cout<<"\nSum of A + B= "<<a+b;
	}
};

class Multi:public Sum
{
	public:
	Multi()
	{
		cout<<"\nMulti of a * b= "<<a*b;
	}
};

main()
{
	Multi mt;
}
