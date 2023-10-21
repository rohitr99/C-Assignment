#include <iostream>
using namespace std;
class shape{
	public:
	virtual void para()=0;
	 virtual void  area()=0;
};
class square: public shape{
	int side;
	public:
		void para(){
			cout<<"Enter a value of Side of square: ";
			cin>>side;
	   }
	   void area(){
	   	  cout<<"Area of Square is: "<< side*side<<endl;
	   }
	   
	  
};

class rectangle: public shape{
	int l,b;
	public:
			void para(){
			cout<<"Enter Length and breadth of Rectangle: ";
			cin>>l>>b;
	   }
	   
	   void area(){
	   	  cout<<"Area of Rectangle is: "<< l*b<<endl;
	   }
		
};




int main(){
	
	cout<<"Using Stack Section"<<endl;
	square s1;
	shape* ptr=&s1;
    ptr->para();
	ptr->area();
	
	cout<<"Using Heap Section"<<endl;
	square* ptr1=new square();
	ptr1->para();
	ptr1->area();
	
	


    
    return 0;
}
