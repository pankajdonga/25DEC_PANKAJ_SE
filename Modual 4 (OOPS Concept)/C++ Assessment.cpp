//C ++ Programming Assessment Test

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Event
{
	public:
	string e_name;
	string c_name;
	int guest;
	int time;
	const double CostPerHour = 18.50;
	const double CostPerMinute = .40;
	const double CostOfDinner = 20.70;
	
	void getdata()
	{
		cout<<"==================== Event Management System ====================";
		cout<<"\nEnter The Name Of Event: ";
		getline(cin,e_name);
		cout<<"\nEnter The Customer's First Name & Last Name: ";
		getline(cin,c_name);
		cout<<"\nEnter Number of Guests: ";
		cin>>guest;
		cout<<"\nEnter The Number of Minutes in Event: ";
		cin>>time;
	}
};

class GetServerCost:public Event
{
	public:
	double total_server;
	double cost1, cost2;
	double CostForOneServer;
	
	void server_require()
	
	{
		total_server=ceil(guest/20);
	}
	
	void server_cost()
	{
		cost1 = (time / 60) * CostPerHour;
		cost2 = (time % 60) * CostPerMinute;
		CostForOneServer = floor(cost1 + cost2);
	}
};

class GetFoodCost:public GetServerCost
{
	public:
	double TotalFoodCost;
	void FoodCost()
	{
		TotalFoodCost=guest*CostOfDinner;
	}
};

class GetAverageCost:public GetFoodCost
{
	public:
	double AverageCost;
	double TotalCost;
	
	void CostPerPerson()
	{
		AverageCost=TotalFoodCost/guest;
	}
	
	void TotalEventCost()
	{
		TotalCost=TotalFoodCost+(total_server*CostForOneServer);
	}
};

class GetDeposite:public GetAverageCost
{
	public:
	double Amount;
	
	void DepositeAmount()
	{
		Amount=TotalCost*.25;
	}
};

class Estimate:public GetDeposite
{
	public:
	void CallData()
	{
		cout<<"\n==================== Event Estimate For:"<<c_name<<"====================\n";
		cout<<"\nNumber Of Server: "<<total_server;
		cout<<"\nThe Cost For Server: "<<CostForOneServer;
		cout<<"\nThe Cost For Food is: "<<TotalFoodCost;
		cout<<"\nAverage Cost Per Person: "<<AverageCost<<"\n";
		cout<<"\nTotal Cost is: "<<TotalCost;
		cout<<"\nPease Deposite a 25% Deposite To Reserve The Event";
		cout<<"\nThe Deposite Needed is: "<<Amount;
	}
};

class PrintData:public Estimate
{
	public:
	
	PrintData()
	{
		getdata();
		server_require();
		server_cost();
		FoodCost();
		CostPerPerson();
		TotalEventCost();
		DepositeAmount();
		CallData();
	}
};


main()
{
	PrintData pd;
}
