//Q.1 Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include<iostream>
using namespace std;
class Batsman
{
	public:
	long int total_run[5],best_performance,position=0;
	char name[5][20];
	double average_run=0;
	long int i=0,n;
	
	void inputdata()
	{
		cout<<"Enter How Many Member in Team= ";
		cin>>n;
		for(i=0; i<n; i++)
		{
			cout<<"Enter ["<<i+1<<"] Cricketer Total Run= ";
			cin>>total_run[i];
			cout<<"Enter ["<<i+1<<"] Cricketer Name= ";
			cin>>name[i];
		}
	}	
};

class Result:public Batsman
{
	public:
	void avgrun()
	{
		cout<<"\n==================== Result ====================\n";
		for(i=0; i<n; i++)
		{
			average_run+=total_run[i]/n;
		}
		cout<<"Average Run is= "<<average_run;
	}
	
	void bestperfo()
	{
		for(i=1; i<=n; i++)
		{
			if(total_run[0]<total_run[i])
			{
				total_run[0]=total_run[i];
				position=i;
			}
		}
		
		cout<<"\nBest Performance is ["<<position+1<<"] "<<name[position]<<" ="<<total_run[0];	
	}
	
};

main()
{
	Result rt;
	rt.inputdata();
	rt.avgrun();
	rt.bestperfo();
}
