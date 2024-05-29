#include <iostream>
using namespace std;

class Customer
{
private: // Private area
    int customerAge;

public: // Public Set area
    void setAge(int x)
    {
        customerAge = x;
    }
    int getAge() // Public Get area
    {
        return customerAge;
    }
};

int main()
{
    Customer myObj;
    myObj.setAge(18);
    cout << myObj.getAge() << endl;
    return 0;
}
// Output: 18