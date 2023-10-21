#include<iostream>
using namespace std;
int main()
{
	int a[5],b[2][2],i,k=0,num,flag,choice,val,no;
	do
	{
	cout<<"Enter the array elements:\n";
	for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
	cout<<"The array elements are:\n";
	while(k<5)
		{
			cout<<a[k]<<"\t";
			k++;
		}
	cout<<"\nEnter any number:\n";
	cin>>num;
	for(int j=0;j<5;j++)
	{
		if(a[j]==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"The "<<num<<" is available in array";
	}
	else
	{
		cout<<"The "<<num<<" is not available in array";
	}
	cout<<"\nEnter your choice:\n";
	cin>>choice;
	switch(choice)
		{
			case 1:
				cout<<"Hello world";
				break;
			case 2:
				cout<<"Hi";
				break;
			case 3:
				cout<<"HEY";
				break;
			default:
				cout<<"Invalid choice";
		}
	cout<<"\nEnter elements for 2d array:\n";
	for(int l=0;l<2;l++)
	{
		for(int p=0;p<2;p++)
		{
			cin>>b[l][p];
		}
	}
	cout<<"Array elements for 2d array:\n";
	for(int l=0;l<2;l++)
	{
		for(int p=0;p<2;p++)
		{
			cout<<b[l][p]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Enter the element which you want to skip\n";
	cin>>no;
	cout<<"Now element "<<no<<" is skipped\n";
	for(int l=0;l<2;l++)
	{
		for(int p=0;p<2;p++)
		{
			if(no==b[l][p])
			{
				continue;
			}
			cout<<b[l][p]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\nDo you want to continue:\n";
	cin>>val;
	}while(val==1);
	
	
}
