#include <iostream>
using namespace std;

int main()
{
    int a[50], b[50], merged[100];
    int n1, n2;

    int i = 0;   
    int j = 0;  
    int k = 0;  

    cout << "Enter size of first array: ";
    cin >> n1;

    cout << "Enter sorted elements of first array: ";

    for(int x = 0; x < n1; x++)
    {
        cin >> a[x];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter sorted elements of second array: ";

    for(int x = 0; x < n2; x++)
    {
        cin >> b[x];
    }

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            merged[k] = a[i];

            i = i + 1;
            k = k + 1;
        }
        else
        {
            merged[k] = b[j];

            j = j + 1;
            k = k + 1;
        }
    }

    while(i < n1)
    {
        merged[k] = a[i];

        i = i + 1;
        k = k + 1;
    }
    while(j < n2)
    {
        merged[k] = b[j];

        j = j + 1;
        k = k + 1;
    }

    cout << "Merged array: ";

    for(int x = 0; x < k; x++)
    {
        cout << merged[x] << " ";
    }

    return 0;
}
    
    
