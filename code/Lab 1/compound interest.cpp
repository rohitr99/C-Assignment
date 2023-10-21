#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,r,n,a,t;
	cout<<"Enter the principal:\n";
	cin>>p;
	cout<<"Enter the rate of interest:\n";
	cin>>r;
	cout<<"Enter the time:\n";
	cin>>n;
	a = p * (pow((1 + r/100), t));
	cout<<"The compound interest is "<<a-p;
}
