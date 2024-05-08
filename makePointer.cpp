#include <iostream>
using namespace std;

int main()
{
    string message = "Terve";
    cout << message;
    cout << endl;
    cout << &message;
    string *ptr = &message;
    cout << endl;
    cout << ptr;
    cout << endl;
    return 0;
}