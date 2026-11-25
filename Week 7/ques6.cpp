#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flightNo;
    string source;
    string destination;
    float fare;

public:
  
    void getData() {
        cout << "Enter Flight Number: ";
        cin >> flightNo;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Fare: ";
        cin >> fare;
    }


    void display() {
        cout << "\nFlight Information\n";
        cout << "Flight Number : " << this->flightNo << endl;
        cout << "Source        : " << this->source << endl;
        cout << "Destination   : " << this->destination << endl;
        cout << "Fare          : " << this->fare << endl;
    }
};

int main() {
    Flight f;

    f.getData();
    f.display();

    return 0;
}
