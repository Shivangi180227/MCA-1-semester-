#include<iostream>
using namespace std;
int main()
{ 
float a,b,c,d,e,f,g;
cout<<"Enter the value of a,b,c,d,e,f and g:";
cin>>a>>b>>c>>d>>e>>f>>g;

if(c==0){
	     cout<<"ERROR: Division with zero is not allowed.";
         }
else {
	   float result=((a+b/c*d-e)*(f-g));
	   cout<<"The result of expression is:"<< result;
     }
 return 0 ;
}

