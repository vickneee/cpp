# include <iostream>
# include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Terve Maailma!" << endl;
    cout << "Hello Hello World!" << endl;
    cout << "Hello World!" << endl;

    int numero;
    int numero2;
    double desimaali;
    float desimaali2;
    char character;
    string sana;

    cout << "Anna numero: ";
    cin >> numero;
    cout << "Numero oli: " << numero << endl;

    cout << "Anna numero 2: ";
    cin >> numero2;
    cout << "Numero + numero2 = " << numero + numero2 << endl;

    cout << "Anna sana: ";
    cin >> sana;
    cout << "Sana oli: " << sana << endl;

    bool trueOrNot;
    int x = 7, y = 3;
    trueOrNot = (x * 7 == y * 9 - 13);
    cout << trueOrNot << endl;
}
