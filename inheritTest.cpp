#include <iostream>
using namespace std;

class Car
{
public:
    string carBrand = "Audi";
    void messagePrint()
    {
        cout << "Car information \n ";
    }
};

// Derived class
class NewCarData : public Car
{
public:
    string carModel = "A6";
};

class NewCarData2 : public NewCarData
{
public:
    int year = 2021;
};

int main()
{
    NewCarData2 CarInfo;
    CarInfo.messagePrint();
    cout << CarInfo.carBrand << " " << CarInfo.carModel << " " << CarInfo.year << endl;
    return 0;
}
