//Q.5 Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;
class Student
{
	public:
	int rollnum;
	
	void rnumdata()
	{
		cout<<"Enter Student Roll Number= ";
		cin>>rollnum;
	}
};

class Test:public Student
{
	public:
	int sub1,sub2,total;
	
	void testdata()
	{
		cout<<"\nEnter 1st Subject Mark= ";
		cin>>sub1;
		cout<<"\nEnter 2nd Subject Mark= ";
		cin>>sub2;
		total=sub1+sub2;
	}
	
};

class Result:public Test
{
	public:
	void resultdata()
	{
		cout<<"\n==================== Result ====================\n";
		cout<<"\nStudent Roll Number= "<<rollnum;
		cout<<"\nTotal Marks Of 2 Subject= "<<total;
	}
};

main()
{
	Result rt;
	rt.rnumdata();
	rt.testdata();
	rt.resultdata();
}
