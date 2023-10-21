#include<iostream>
using namespace std;
int main(){
	int a,b,i,ans=1;
	cout<<"enter base\n";
	cin>>a;
	cout<<"enter exponential\n";
	cin>>b;
	for(i=1;i<=b;i++){
		ans=ans*a;
		
	}
	cout<<"the value of base to exponential is\n"<<ans;
}
