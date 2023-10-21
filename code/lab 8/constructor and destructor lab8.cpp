#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo()
		{
			cout<<"in constructor of a";
		}
		~Demo()
		{
			cout<<"\nIn destructor of a";
		}
};
int main()
{
	Demo d;
	return 0;
}
