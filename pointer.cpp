#include <iostream>

using namespace std;

int main()
{
    string myVariable;
    myVariable.resize(15);
    myVariable = "Terve";
    string *ptrTest = &myVariable;
    cout << ptrTest << endl
         << &myVariable << endl;
    // Both give the same 0x61fdd0 address Which is correct

    // the correct address is 0x61fde0

    const char *str = reinterpret_cast<const char *>(0x61fdd0);
    cout << str << endl;
    cout << ptrTest << endl;
    unsigned char *ptr = reinterpret_cast<unsigned char *>(0x61fde0);
    for (int i = 0; i < 10; i++)
    {
        cout << "Byte" << i << " at address " << reinterpret_cast<void *>(ptr + i) << ": " << static_cast<int>(ptr[i]) << endl;
    }
};