#include <iostream>
using namespace std;

void functionName(string = "Kekkonen", string = "Kalevi");

int main()
{

    functionName("Markus");
    functionName("Juha");
    functionName();
    return 0;
}

void functionName(string name, string lastName)
{
    cout << name << endl
         << " " << lastName << endl;
}