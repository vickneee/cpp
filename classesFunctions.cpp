#include <iostream>
using namespace std;

class MyClass
{
public:
    void myFunction()
    {
        cout << "Hello World!" << endl;
    }

    string strFun(string a)
    {
        return a;
    }

    int intFun(int b)
    {
        return b + 1;
    }

    float floatFun(float c)
    {
        return c + 0.1;
    }

    bool boolFun(bool d)
    {
        return d;
    }
};

void myFunctionThing(string a, int b, float c, bool d)
{
    cout << a << " | " << b << " | " << c << "|" << d << endl;
}

int main()
{
    MyClass myObj;
    myObj.myFunction();
    myFunctionThing(myObj.strFun("Hello"), myObj.intFun(5), myObj.floatFun(3.14), myObj.boolFun(true));
    return 0;
}