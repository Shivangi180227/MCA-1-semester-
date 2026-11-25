#include<iostream>
#include<string>
using namespace std;
int main (){
	string str;
	int length=0;
	
	cout<<"Enter the string : ";
	cin>> str;
	
	char* p=&str[0];
	while(*p !='\0')
	{
		length=length+1;
		p++;
	}
	cout<<"The length of string is : "<<length;
	return 0;
}
