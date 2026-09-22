#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of element in array :";
	cin>>n;
	int a[n];
	cout<<"Enter the values in array :";
	for (int i=0;i<=n;i++)
	{
		cin>>a[i];
		
	}
	
	cout<<"The array is :"<<endl;
	for(int i=0; i<=n; i++)
	{
		
		cout<<a[i]<<" ";
	}
	return 0 ;
}
