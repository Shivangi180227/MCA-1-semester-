#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, i ;
    float *p,arr[100], sum=0,mean,variance=0,sd;

    cout << "Enter the number of elements: ";
    cin >> n;

    p=arr;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
        sum += *(p + i);
    }

    
    mean = sum / n;

    
    for (int i = 0; i < n; i++) {
        variance += pow((*(p + i) - mean), 2);
    }

    variance = variance/ n;

    
    sd = sqrt(variance);

    cout << "\nSum = " << sum;
    cout << "\nMean = " << mean;
    cout << "\nStandard Deviation = " << sd << endl;

   

    return 0;
}
