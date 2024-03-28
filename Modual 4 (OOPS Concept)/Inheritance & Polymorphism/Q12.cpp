//Q.12 Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class SwapNumber
{
	int a,b;
	
	public:
	SwapNumber(int a=12, int b=15)
	{
		this->a=a;
		this->b=b;
	}
	friend void number(SwapNumber sn1);
};

void number(SwapNumber sn1)
{
	cout<<"\nNumber Before Swap\n";
	cout<<"\n a="<<sn1.a;
	cout<<"\n b="<<sn1.b<<"\n";
	sn1.a=sn1.a+sn1.b;
	sn1.b=sn1.a-sn1.b;
	sn1.a=sn1.a-sn1.b;
	cout<<"\nNumber After Swap\n";
	cout<<"\n a="<<sn1.a;
	cout<<"\n b="<<sn1.b;
}

main()
{
	SwapNumber sn;
	
	number(sn);
	
}
