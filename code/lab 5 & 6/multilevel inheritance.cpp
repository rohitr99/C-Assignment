#include<iostream>
using namespace std;
class employee{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary(){
			return 0;
		}
};
employee::employee(){
	cout<<"in default of emp\n";
	id=0;
}
employee::employee(int i){
	cout<<"in para of emp\n";
	id=i;
}
void employee::display(){
	cout<<"id of an emp is\n"<<id<<endl;
}
class wageemployee:public employee{
	int hrs,rate;
	public:
		wageemployee();
			wageemployee(int, int, int);
			void display();
			int findsalary();
};
wageemployee::wageemployee(){
	cout<<"in default\n";
	hrs=0;
	rate=0;
}
wageemployee::wageemployee(int i, int h, int r):employee(i){
	cout<<"in para of wage";
	hrs=h;
	rate=r;
}
int wageemployee::findsalary(){
	return hrs*rate;
}
void wageemployee::display(){
	employee::display();
	cout<<hrs<<endl;
	cout<<rate<<endl;
}
class salesmanager: public wageemployee{
	int sales,comm;
	public:
		salesmanager();
		salesmanager(int, int, int, int, int);
		void display();
		int findsalary();
};
salesmanager::salesmanager(){
	cout<<"in default of sales\n";
	sales=comm=0;
}
salesmanager::salesmanager(int i, int h,int r, int s, int c):wageemployee(i,h,r)
{
	cout<<"in para of sales\n";
	sales=s;
	comm=c;
}
void salesmanager::display(){
	wageemployee::display();
	cout<<"sales of an emp is\n"<<sales<<endl;
		cout<<"sales of an emp is\n"<<comm<<endl;
}
int salesmanager::findsalary(){
	return(wageemployee::findsalary())+sales*comm;
}
int main(){
	salesmanager*sm=new salesmanager(101,10,500,2000,1);
	sm->display();
	cout<<"salary id"<<sm->findsalary();
	if(sm)
	delete sm;
}


