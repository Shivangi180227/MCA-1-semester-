#include<iostream>
using namespace std;
int main()
{
   int arr[100], n;
   int largest, secondlargest;
   
   cout<<"Enter the number of elements: ";
   cin>> n;
   
   cout<<"Enter elements : ";
   
   for(int i=0; i<n; i++)
   {
   	cin>>arr[i];
   }
    largest=arr[0];
    secondlargest=arr[0];
    
    for(int i=1; i<n; i++)

    {
    	if(arr[i]>largest)
    	{
		secondlargest=largest;
		largest=arr[i];
		}
		else if(arr[i]>secondlargest && arr[i]!=largest)
		{
			secondlargest=arr[i];
		}
		
	}
		cout<<"Second largest = "<<secondlargest;
		
		return 0;
}
