#include<iostream>
using namespace std;
class Flight
{
	int flight_no ;
	string source ;
	string destination;
	float fare;
	
	public :
	void getdata(int fno, string src, string dstn, float fre)
	{
	  flight_no =fno;
	  source = src;
	  destination = dstn;
	  fare =fre ;	
	}
	
	void display()
	{
		cout<<"Flight no.: "<< this->flight_no<<endl;
		cout<<"Source :"<< this->source<<endl;
		cout<<"Destination :"<< this->destination<<endl;
		cout<<"Fare :"<<this->fare<< endl;
	}
};

int main()
{
	Flight f;
	
	f.getdata(101,"Delhi","Mumbai",3500);
	f.display();
	
	return 0;
}
