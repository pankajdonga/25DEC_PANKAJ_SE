//Q.4 Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;
class Bank
{
	private:
	long int acc_num;
	long int balance=100000;
	long int deposite;
	long int withdraw;
	
	public:
	void getdata()
	{
		cout<<"Enter Your Bank Account number= ";
		cin>>acc_num;
	}
	
	void c_deposite()
	{
		cout<<"Enter Deposite Amount= ";
		cin>>deposite;
		balance=balance+withdraw;
	}
	
	void c_withdraw()
	{
		cout<<"Enter Deposite Amount= ";
		cin>>withdraw;
		balance=balance-withdraw;
	}
	
	void statement()
	{
		cout<<"\n==================== Statement ====================\n";
		cout<<"\nBank Account Number= "<<acc_num;
		cout<<"\nBank Balance= "<<balance;
		
	}
};
main()
{
	Bank bk;
	bk.getdata();
	bk.c_deposite();
	bk.c_withdraw();
	bk.statement();
}
