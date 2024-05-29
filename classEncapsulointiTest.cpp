#include <iostream>
using namespace std;

class Car
{
private: // Private area
    string carModel;

public: // Public Set area
    void setModel(string x)
    {
        carModel = x;
    }
    string getModel() // Public Get area
    {
        return carModel;
    }
};

int main()
{
    Car myCar;
    myCar.setModel("Volvo");
    cout << myCar.getModel() << endl;
    return 0;
}