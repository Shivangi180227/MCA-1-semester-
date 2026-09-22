#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,42,88,55,44,22,66,77,55,66};
	int length=sizeof(a)/sizeof(a[0]);
	cout<<"The length of array is :"<< length;
	return 0;	
}
