//Q.7 Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;
class Date
{
	private:
	int day;
	int month;
	int year;
	public:
	void getdata()
	{
		cout<<"Enter Day= ";
		cin>>day;
		cout<<"Enter Month= ";
		cin>>month;
		cout<<"Enter Year= ";
		cin>>year;
	}
	
	void printdata()
	{
		cout<<"\n==================== Date ====================\n";
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			if(day <=31 && day >=1)
			{
				cout<<day<<"/";
			}
			else
			{
				cout<<"\nError! Enter valid day\n";
			}
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11)
		{
			if(day <=30 && day >=1)
			{
				cout<<day<<"/";
			}
			else
			{
				cout<<"\nError! Enter valid day\n";
			}
		}
		else if(month == 2)
		{
			if(day <=29 && day >=1)
			{
				cout<<day<<"/";
			}
			else
			{
				cout<<"\nError! Enter valid day\n";
			}
		}
		
		if (month <=12 && month >=1)
		{
			cout<<month<<"/";
		}
		else
		{
			cout<<"\nError! Enter valid Month\n";
		}
		
		cout<<year;
		
	}
};

main()
{
	Date dt;
	dt.getdata();
	dt.printdata();
}
