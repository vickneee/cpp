#include <iostream>
using namespace std;

class Customer
{
public:
    string firstName = "John";
    void messagePrint()
    {
        cout << "Customer information \n ";
    }
};

// Derived class
class NewCustomerData : public Customer
{
public:
    string lastName = "Doe";
};

int main()
{
    NewCustomerData CustomerInfo;
    CustomerInfo.messagePrint();
    cout << CustomerInfo.firstName << " " << CustomerInfo.lastName << endl;
    return 0;
}
