#include<iostream>
using namespace std;
void add(int *p,int *q)
{
	int add;
	add=(*p)+(*q);
	cout<<"Addition is "<<add<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter the two numbers:\n";
	cin>>a>>b;
	add(&a,&b);
	return 0;
}
