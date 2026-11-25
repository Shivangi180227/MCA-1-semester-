#include <iostream>
#include<string>
using namespace std;
int main ()
{
	string str;
	
	int count=0;
	
	cout <<"Enter any string : ";
	getline(cin,str);
	
	char* p=&str[0];
	while(*p !='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
		    *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		{
			count++;
			
		}
	 p++;
	}
	cout<<"The total number of vowels in the string are : "<<count;
	return 0;
}
