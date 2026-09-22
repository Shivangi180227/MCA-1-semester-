#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of element in array :";
	cin>>n;
	int a[n];
	cout<<"Enter the values in array :";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int sum=0;
	for(int j=0; j<n ;j++)
	{
		sum=sum+a[j];
		
	}
	cout<<"Sum of element is :"<<sum;
	return 0;
}
