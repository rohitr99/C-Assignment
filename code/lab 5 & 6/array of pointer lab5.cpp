#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int ptr[n];
	int* ptr1[n];
	cout<<"Enter the size:\n";
	cin>>n;
	cout<<"Enter the array elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>ptr[i];
	}
	for(i=0;i<n;i++)
	{
		ptr1[i]=&ptr[i];
	}
	cout<<"Array element by ptr1:\n";
	for(i=0;i<n;i++)
	{
		cout<<*ptr1[i]<<endl;
	}
	return 0;
}
