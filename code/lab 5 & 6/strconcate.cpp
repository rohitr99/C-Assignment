#include<iostream>
using namespace std;
void strcat(char* p,char* q)
{
	int i=0,j=0;
	while(p[i]!='\0')
	{
		i++;
	}
	while(q[j]!='\0')
	{
		p[i]=q[j];
		j++;
		i++;
	}
	p[i]='\0';
	cout<<"The new string is "<<p<<endl;
}
int main()
{ 
	char a[50],b[50];
	cout<<"Enter the 1st string:\n";
	cin>>a;
	cout<<"Enter the 2nd string:\n";
	cin>>b;
	strcat(a,b);
	
}
