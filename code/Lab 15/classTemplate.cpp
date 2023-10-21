#include<iostream>
using namespace std;

template <class T>
class Num
{
	
	public:
	T a;
	T b;
	
	T display()
	{
		cout<<"Enter first number"<<endl;
		cin>>a;
		cout<<"Enter second number"<<endl;
		cin>>b;
		cout<<"Addition of two numbers is : "<<a+b;		
	}
	
};

int main()
{
	Num<int> obj;
	Num<float> obj1;
	obj.display();
	obj1.display();
}
