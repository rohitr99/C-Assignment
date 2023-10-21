#include<iostream>
using namespace std;
int main(int a,char* b[])
{
	cout<<"You have entered "<<a<<"arguments: "<<"\n";
	for(int i=0;i<a;i++)
	{
		cout<<b[i]<<"\n";
		cout<<"r";
	}
	return 0;
}
