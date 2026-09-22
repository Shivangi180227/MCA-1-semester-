#include <iostream>
using namespace std;

void swapNumbers(int *p1, int *p2)
{
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swapNumbers(&a, &b);

    cout << "After swapping: " << a << " " << b;

    return 0;
}
