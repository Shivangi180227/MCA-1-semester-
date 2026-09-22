#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    char *p = &str[0];

    cout << "Reverse of the string is : ";

    for(int i = str.length() - 1; i >= 0; i--)
    {
        cout << *(p + i);
    }

    return 0;
}
