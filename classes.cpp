#include <iostream>
using namespace std;

class Car
{
public:
    int carSerial;
    string carModel;
    int carYear;
};

int main()
{
    Car myCar;

    myCar.carSerial = 12599;
    myCar.carModel = "Volvo";
    myCar.carYear = 2019;

    cout << myCar.carSerial << "\n";
    cout << myCar.carModel << "\n";
    cout << myCar.carYear << endl;
    return 0;
}