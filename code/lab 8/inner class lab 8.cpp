#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		void show()
		{
		B obj;
			obj.get();
			cout<<"in show";
		}
		
		class B 
		{
			int y;
			public:
				voidget()
				{
					cout<<"in get";
				/*	A obj;
					obj.show();
					cout<<"Enter the value of y "<<endl;
					cin>>y;*/
				}
				void put()
				{
					cout<<"The value of y is "<<y<<endl;
				}
		};
};
int main()
{
	A::B::get();
	b.get();
	b.put();
	
	return 0;
}
