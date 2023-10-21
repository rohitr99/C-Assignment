#include<iostream>
using namespace std;
void strcpy(char*q)
{
	int l1=0,j=0,i;
	char b[50];
	while(q[j]!='\0')
	{
		l1++;
		j++;
	}
	cout<<l1<<endl;
	for(i=0;i<l1;i++)
	{
		b[i]=q[i];
	}
	b[i]='\0';
	cout<<"The new string is "<<b;
}
int main()
{
	char a[50];
	cout<<"Enter the 1st string:\n";
	cin>>a;
	strcpy(a);
}
