//Q.9 Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Calculate
{
	public:
    int a[2][3];
	int i,j;
	
	Calculate(int a[2][3])
	{
		
		for(i=0; i<2; i++)
		{
			for(j=0; j<3; j++)
			{
				this->a[i][j]=a[i][j];
			}
		}
	}
	
	Calculate()
	{
		
	}
	Calculate operator+(Calculate &cl);
	void display();	
};

void Calculate::display()
{
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}	
}

Calculate Calculate::operator+(Calculate &cl)
{
	Calculate temp;
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			temp.a[i][j]= a[i][j] + cl.a[i][j];
		}
	}
	return temp;
}

main()
{
	int arrey[2][3]={{1,2,3},{4,5,6}};
	int arrey1[2][3]={{3,2,8},{1,7,6}};
	Calculate ct1(arrey);
	Calculate ct2(arrey1);
	Calculate ct3;
	
	ct3=ct1+ct2;
	
	ct3.display();
}


