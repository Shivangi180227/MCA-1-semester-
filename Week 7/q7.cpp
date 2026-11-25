#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    void setData(int n) {
        num = n;
    }

   
    Demo* showData() {
        cout << "Number = " << this->num << endl;
        return this;
    }
};

int main() {
    Demo d;
    d.setData(100);

    Demo *ptr;
    ptr = d.showData();   // returns object pointer

    cout << "Address returned by this pointer: " << ptr << endl;

    return 0;
}

