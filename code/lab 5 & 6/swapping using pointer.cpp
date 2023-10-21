#include<iostream>
using namespace std;
void swap(int*p, int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"After swapping:\n";
	cout<<*p<<"\t"<<*q;
}

int main(){
	int a,b;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	cout<<"before swapping is\n";
	cout<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	
}
