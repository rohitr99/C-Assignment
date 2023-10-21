#include<iostream>
using namespace std;
void strlen(char*q)
{
	int l1=0,j=0;
	while(q[j]!='\0')
	{
		l1++;
		j++;
	}
	cout<<l1<<endl;
}
int main()
{
	char a[50];
	cout<<"Enter the 1st string:\n";
	cin>>a;
	strlen(a);
}