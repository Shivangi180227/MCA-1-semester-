#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"Enter the value of coefficients a,b and c:";
	cin>>a>>b>>c;
	
	
	
	if(a==0){
		cout<<"The equation is not quadratic.";
		}
	else
	{
	double discriminant= (b*b - 4*a*c);
	if(discriminant>0){
	double root1=(-b + sqrt(discriminant)) / (2*a);
	double root2=(-b - sqrt(discriminant)) / (2*a);
	cout<<"Roots are real and distinct."<<endl;
	cout<<"Root 1 is: "<< root1<<endl;
	cout<<"Root 2 is: "<<root2<<endl;
		
	}
	else if(discriminant==0){
		double root=-b/(2*a);
		cout<<"The roots are real and equal."<<endl;
		cout<<root;
	}
	else
	{
		double realpart=-b/(2*a);
		double imgpart=sqrt(discriminant)/(2*a);
		cout<<"Roots are imaginary."<<endl;
		cout<<"Root 1 ="<<realpart<<" + "<<imgpart<<"i"<<endl;
		cout<<"Root 2 ="<<realpart<<" - "<<imgpart<<"i"<<endl;
	}
}
	return 0;
}
