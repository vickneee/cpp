#include <iostream>
using namespace std;

class MyClass
{
public:
    void myBaseFunction()
    {
        cout << "Hello!" << endl;
    }

    int intFun(int a)
    {
        return a;
    }

    int intFun2(int b)
    {
        return b + 1;
    }

    string strFun(string c)
    {
        return c;
    }

    bool boolFun(bool d)
    {
        return d;
    }
};

void myFunction(int a, int b, string c, bool d)
{
    cout << a << " | " << b << " | " << c << " | " << d << endl;
}

int main()
{
    MyClass myObj;
    MyClass myObj2;
    myObj.myBaseFunction();
    myFunction(myObj.intFun(5), myObj.intFun2(5), myObj.strFun("Hello"), myObj.boolFun(true));
    myFunction(myObj2.intFun(10), myObj2.intFun2(10), myObj2.strFun("World"), myObj2.boolFun(false));
    return 0;
}
