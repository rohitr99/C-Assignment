#include<iostream>
using namespace std;
template <class T>
T Usrswap(T a,T b){
	cout<<"Before swapping"<<a<<b;
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swpping"<<a<<" "<<b<<endl;
}

int main(){
	Usrswap(10,20);	
}
