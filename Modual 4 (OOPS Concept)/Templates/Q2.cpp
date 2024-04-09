//Q.2. Write a program of to sort the array using templates

#include<iostream>
#include<algorithm>
using namespace std;
void print_arrey(int a[], int asize)
{
	for(int i=0; i<asize; i++)
	{
		cout<<a[i]<<", ";
	}
}

main()
{
	int n;
	cout<<"How Many Number Do You Want To Enter: \n";
	cin>>n;
	int arrey[n];
	cout<<"Enter Arrey Element: \n";
	for(int i=0; i<n; i++)
	{
		cin>>arrey[i];
	}
	
	int demo_size=sizeof(arrey)/sizeof(arrey[0]);
	
	cout<<"\nThe Arrey Elements Before Sorting:";
	
	print_arrey(arrey, n);
	
	sort(arrey, arrey+demo_size);
	
	cout<<"\nThe Arrey Elements After Sorting:";
	
	print_arrey(arrey, n);
	
}
