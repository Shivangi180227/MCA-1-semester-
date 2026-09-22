#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos=0, neg=0, odd=0, even=0;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) cin >> arr[i];
    
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) pos++;      
        else if(arr[i] < 0) neg++;  
        
        if(arr[i] % 2 == 0) even++; 
        else odd++;                 
    }
    cout << "Array elements: ";
      for(int i = 0; i < n; i++)
     {
       cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Positive: " << pos << ", Negative: " << neg << endl;
    cout << "Even: " << even << ", Odd: " << odd;
    return 0;
}
