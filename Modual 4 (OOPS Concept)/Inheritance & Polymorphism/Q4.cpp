//Q.4 Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;
class Sub_list
{
	public:
	char name[20];
	
	void namedata()
	{
		cout<<"Enter Student Name= ";
		cin>>name;
	}
};

class Maths
{
	public:
	int m_marks;
	
	void mathdata()
	{
		cout<<"Enter Maths Marks= ";
		cin>>m_marks;
	}
};

class English
{
	public:
	int e_marks;
	
	void englishdata()
	{
		cout<<"Enter English Marks= ";
		cin>>e_marks;
	}
	
};

class Hindi
{
	public:
	int h_marks;
	
	void hindidata()
	{
		cout<<"Enter Hindi Data= ";
		cin>>h_marks;
	}
	
};

class Printdata:public Sub_list,public Maths,public English, public Hindi
{
	public:
	
	void printmarks()
	{
		cout<<"\n==================== Mark-Sheet ====================\n";
		cout<<"\nStudent Name = "<<name;
		cout<<"\nMaths = "<<m_marks;
		cout<<"\nEnglish = "<<e_marks;
		cout<<"\nHindi = "<<h_marks;
	}
};

main()
{
	Printdata pd;
	
	pd.namedata();
	pd.mathdata();
	pd.englishdata();
	pd.hindidata();
	pd.printmarks();
	
}
