#include<iostream>
using namespace std;
int main()
{
	int num ;
	cout<<"Enter three digit number :";
	cin>>num;
	
	if (num <100 || num >999){
		cout<<"Please enter three digit number!";
	}
	else {
	int original=num;
	int digit1=num%10 ;
	num = num/10 ;
	int digit2=num%10;
	num=num/10;
	int digit3=num%10;
	
	int sum =(digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);
	
	if(sum==original)
		cout<<original<<" is a Armstrong number.";
	
	else
	cout<<original<<" is not a Armstrong number.";
}
	return 0;
}
