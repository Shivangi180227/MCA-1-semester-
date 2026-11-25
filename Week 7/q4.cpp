#include<iostream>
using namespace std;

class pntr_obj
{
	string name;
	int roll_no;
	
	public:
		void set_data(string n,int r)
		{
			name = n;
			roll_no =r;
		}
		
		void print()
		{
			cout<<"Name of student is :"<<name <<endl;
			cout<<"Roll number is :"<< roll_no<<endl;
			cout<<"Object address is : "<< this<< endl;
			
    	}
    	
};
int main()
{
	pntr_obj obj1,obj2,obj3;
	
	obj1.set_data("Shivangi",140);
	obj2.set_data("Shireen", 157);
	obj3.set_data("Rabia", 137);
	
	obj1.print();
	obj2.print();
	obj3.print();
	
	return 0;
}
