//Q.9 Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Calculate
{
	public:
	int a[3][3]={{10,20,30},{02,56,45},{24,78,42}};
	int i,j;
	
	Calculate()
	{
		for (i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				cout<<"\t"<<a[i][j];
			}
			cout<<"\n";
		}
	}
	
};

main()
{
	Calculate ct;
}

