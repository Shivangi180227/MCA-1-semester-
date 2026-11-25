#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }

  
    int greater(Number obj) {
        if (this->num > obj.num)
            return this->num;  
        else
            return obj.num;
    }
};

int main() {
    Number n1, n2;

    cout << "Enter first number:\n";
    n1.getData();

    cout << "Enter second number:\n";
    n2.getData();

    cout << "\nGreatest Number = " << n1.greater(n2)
	 << endl;

    return 0;
}
