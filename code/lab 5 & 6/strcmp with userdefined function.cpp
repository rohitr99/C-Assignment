#include<iostream>
using namespace std;
int cmp(char* p,char* q)
{
	int i=0,flag;
	while(p[i]!='\0'&&q[i]!='\0')
	{
		if(p[i]!=q[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	return flag;
}
int main()
{
	int c;
	char a[50],b[50];
	cout<<"Enter the 1st string:\n";
	cin>>a;
	cout<<"Enter the 2nd string:\n";
	cin>>b;
	c=cmp(a,b);
	if(c!='\0')
	{
		cout<<"Both the strings are same";
	}
	else
	{
		cout<<"Both the strings are not same";
	}
	
}
