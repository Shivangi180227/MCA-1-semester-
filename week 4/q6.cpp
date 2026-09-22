#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the character:";
	cin>>ch;
	
	int ascii=(int)ch;
	
	if(ascii>=65 && ascii<=90)
	cout<<ch<<" is capital letter.";
	else if (ascii>=97 && ascii<=122)
	cout<<ch<<" is small letter.";
	else if(ascii>=48 && ascii<=57)
	cout<<ch<<" is a digit.";
	else
	cout<<ch<<" is a special symbol";
	
	return 0 ;
}
