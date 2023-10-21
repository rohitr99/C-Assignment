#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the two numbers:\n";
	cin>>a>>b;
	cout<<"Before swapping: \n";
	cout<<"a = "<<a;
	cout<<"\tb = "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter swapping:\n";
	cout<<"Before swapping: ";
	cout<<"a = "<<a;
	cout<<"\tb = "<<b;
	return 0;
}
