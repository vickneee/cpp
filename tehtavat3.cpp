# include <iostream>
# include <string>
using namespace std;

int main()
{
    string empty = "";

    // while, for, do while
    int num = 1;
    while (num <= 5)
    {
        cout << num << endl;
        if (num == 3)
        {
            break;
        }
        num++;
    }

    cout << empty << endl;

    int num3 = 3;
    do
    {
        cout << num3 << endl;
        num++;

    } while (num3 >= 5);

    cout << empty << endl;

    for (int num1 = 1; num1 <= 5; num1++)
    {
        cout << num1 << endl;
    }

    cout << empty << endl;

    for (int num1 = 1; num1 <= 5; num1 = num1 + 2)
    {
        cout << num1 << endl;
    }

    cout << empty << endl;

    for (int num1 = 1; num1 <= 5; num1++)
    {
        if (num1 == 3)
        {
            continue;
        }
        cout << num1 << endl;
    }
}
