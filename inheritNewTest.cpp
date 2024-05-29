#include <iostream>
using namespace std;

class Car
{
public:
    string carBrand = "Toyota";
    void messagePrint()
    {
        cout << "Car information \n ";
    }
};

class Year
{
public:
    int year = 2020;
};

// Derived class
class NewCarData : public Car, public Year
{
public:
    string carModel = "Corolla";
};

int main()
{
    NewCarData CarInfo;
    CarInfo.messagePrint();
    cout << CarInfo.carBrand << " " << CarInfo.carModel << " " << CarInfo.year << endl;
    return 0;
}
