//Q.2. Define a class to represent a bank account. Include the following members:
//Q.3. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include<iostream>
using namespace std;
class bank
{
	public:
	char name[20];
	char acc_type[20];
	long int account_number;
	long int balance=100000;
	long
	long int deposite;
	long int withdraw;
	void getdata()
	{
		cout<<"Enter Your Name= ";
		cin>>name;
		cout<<"Enter Your Account Type= ";
		cin>>acc_type;
		cout<<"Enter Your Account Number= ";
		cin>>account_number;
	}
	
	void deposite_amnt()
	{
		cout<<"\n=====================Cash_Deposite=====================\n";
		cout<<"Enter Deposite Amount= ";
		cin>>deposite;
		balance=balance+deposite;
		cout<<"\nYour Balance Is= "<<balance;	
	}
	
	void withdraw_amnt()
	{
		cout<<"\n=====================Cash_Withdraw=====================\n";
		cout<<"\nEnter Withdraw Amount= ";
		cin>>withdraw;
		if(deposite>balance)
		{
			cout<<"\nSorry! Insuficient Balance";
		}
		else
		{
			balance=balance-withdraw;
			cout<<"\nRemaining Balance Is= "<<balance;	
		}	
	}
	
	void statement()
	{
		cout<<"\n=====================Statement=====================\n";
		cout<<"\nName= "<<name;
		cout<<"\nAccount Type= "<<acc_type;
		cout<<"\nAccount Number= "<<account_number;
		cout<<"\nAccount Balance= "<<balance;
	}
	
	
};

main()
{
	bank bn;
	bn.getdata();
	bn.deposite_amnt();
	bn.withdraw_amnt();
	bn.statement();
}
