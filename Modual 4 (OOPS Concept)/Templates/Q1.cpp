//Q.1 Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template<class T1, class T2>

class Test
{
	public:
	T1 a;
	T2 b;
	
	Test(T1 x, T2 y)
	{
		a=x;
		b=y;
	}
	
	void display()
	{
		cout<<"\n========== Before Swap ==========\n\n";
		cout<<a<<endl<<b;
		a=a+b;
		b=a-b;
		a=a-b;
		cout<<"\n========== Before Swap ==========\n\n";
		cout<<a<<endl<<b;
	}
};

main()
{
	Test<int, int> Ts(10.3, 12);
	
	Ts.display();
}
