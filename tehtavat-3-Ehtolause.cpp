# include <iostream>
# include <string>
using namespace std;

int main()
{
    // Tehävä 1

    int number;

    cout << "Input an integer: ";
    cin >> number;
    if (number % 2 == 0)
        cout << "The number " << number << " is even." << endl;
    else
        cout << "The number " << number << " is odd." << endl;
    ;

    // Tehtävä 2, 3, 4

    int number1;

    cout << "Input an integer: ";
    cin >> number1;
    if (number1 < 10)
        cout << "Luku " << number1 << " on pienempi kuin 10!" << endl;
    else if (number1 > 10)
        cout << "Luku " << number1 << " on suurempi kuin 10!" << endl;
    else if (number1 < 0)
        cout << "Anna positiivinen luku kiitos!" << endl;
    else
        cout << "Täysi kymppi!!!" << endl;

    // Tehtävä 5

    float num1, num2, num3;
    float average;

    cout << "Input first number: ";
    cin >> num1;
    cout << "Input second number: ";
    cin >> num2;
    cout << "Input third number: ";
    cin >> num3;
    average = (num1 + num2 + num3) / 3;

    cout << "Average is: " << average << endl;

    // Tehtävä 6

    int number2;

    cout << "Anna kokonaisluku: ";
    cin >> number2;
    if (number2 < 0)
        cout << "Luku " << number2 << " on negatiivinen!" << endl;
    else if (number2 > 0)
        cout << "Luku " << number2 << " positiivinen!" << endl;
    else
        cout << "Integer is 0!!!" << endl;

    // Tehtävä 7

    int luku1;
    int luku2;
    int luku3;

    cout << "Anna luku 1: ";
    cin >> luku1;
    cout << "Anna luku 2: ";
    cin >> luku2;
    cout << "Anna luku 2: ";
    cin >> luku3;

    if (luku1 == luku2 || luku2 == luku3 || luku1 == luku3)
    {
        cout << "Luvut ovat yhtä suuria!" << endl;
    }
    if (luku1 < luku2 && luku1 < luku3)
    {
        cout << "Pienin luku on: " << luku1 << endl;
    }
    else if (luku2 < luku1 && luku2 < luku3)
    {
        cout << "Pienin luku on: " << luku2 << endl;
    }
    else if (luku3 < luku1 && luku3 < luku2)
    {
        cout << "Pienin luku on: " << luku3 << endl;
    }

    // Tehtävä 8

    string sana = "";
    cout << "Anna sana: ";
    cin >> sana;
    // getline(cin, sana);
    cout << sana << endl;

    if (sana.length() < 5)
    {
        cout << "Onpa lyhyt sana!" << endl;
    }
    if (sana.length() > 10)
    {
        cout << "Onpa pitkä sana!" << endl;
    }

    // Tehtävä 9

    string sana1 = "";
    string sana2 = "";

    cout << "Anna ensimmainen sana: ";
    cin >> sana1;
    cout << "Anna toinen sana: ";
    cin >> sana2;

    if (sana1[0] == sana2[0])
    {
        cout << "Molemma sanat alkavat kirjaimella " << sana1[0] << "." << endl;
    }
    else
    {
        cout << "Sanojen ensimmaiset kirjaimmet erovat." << endl;
    }
}
