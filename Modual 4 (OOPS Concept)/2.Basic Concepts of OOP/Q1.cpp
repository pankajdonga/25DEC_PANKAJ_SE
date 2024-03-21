//Q.1 WAP to create simple calculator using class.

#include<iostream>
using namespace std;
class calculator
{
	public:
	int a;
	int b;
	
	void getdata()
	{
		cout<<"Enter Value for A= ";
		cin>>a;
		cout<<"Enter Value For B= ";
		cin>>b;
	}
	
	void getsum()
	{
		cout<<"Sum Of A + B= "<<a+b;
	}
	
	void getsubstraction()
	{
		cout<<"Substraction Of A - B= "<<a-b;
	}
	
	void getmulti()
	{
		cout<<"Multiplication Of A * B= "<<a*b;
	}
	
	void getdivision()
	{
		cout<<"Division Of A / B= "<<a/b;
	}
};

main()
{
	calculator calc;
	char ch;
	
	calc.getdata(); 
	
	cout<<"Enter (+, -, *, /)= ";
	cin>>ch;
	
	switch(ch)
	{
		case '+':
		calc.getsum();
		break;
		
		case '-':
		calc.getsubstraction();
		break;
		
		case '*':
		calc.getmulti();
		break;
		
		case '/':
		calc.getdivision();
		break;
		
		default:
			cout<<"Error! Enter Valid Choice....";
		break;
	
	}

}
