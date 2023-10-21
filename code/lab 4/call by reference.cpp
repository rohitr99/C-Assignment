#include<iostream>
using namespace std;
void swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping:\n "<<p<<"\t"<<q<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter the two numbers:\n";
	cin>>a>>b;
	cout<<"Value before swapping:\n";
	cout<<a<<"\t"<<b<<endl;
	swap(a,b);
	
}
