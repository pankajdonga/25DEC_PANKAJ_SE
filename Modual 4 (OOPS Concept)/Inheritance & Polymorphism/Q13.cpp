//Q.13 Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class Find
{
	int a,b,maxnumber;
	
	public:
	Find(int a, int b)
	{
		this->a=a;
		this->b=b;
	}
	
	friend void max(Find fn);
};

void max(Find fn)
{
	cout<<"\n Number a= "<<fn.a;
	cout<<"\n Number b= "<<fn.b;
	fn.maxnumber=(fn.a>fn.b)? fn.a:fn.b;
	
	cout<<"\n\nMax Number= "<<fn.maxnumber;
}

main()
{
	int a,b;
	
	cout<<"\nEnter Value for a= ";
	cin>>a;
	cout<<"\nEnter Value for b= ";
	cin>>b;
	
	Find fn1(a,b);
	
	max(fn1);
}
