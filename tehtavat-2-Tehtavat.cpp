# include <iostream>
# include <string>
# include <cmath>
using namespace std;

int main()
{
    // Tehtävä 1

    int numero;

    cout << "Anna numero: ";
    cin >> numero;
    cout << "Numero oli: " << numero << endl;

    // Tehtävä 2

    string sana;

    cout << "Anna sana: ";
    cin >> sana;
    cout << "Sana oli: " << sana << endl;

    // Tehtävä 3

    float numero2;

    cout << "Anna desimaaliluku: ";
    cin >> numero2;
    cout << "Desimaaliluku oli: " << numero2 << endl;

    // Tehtävä 4

    int num1, num2;

    cout << "Anna ensimmainen numero: ";
    cin >> num1;
    cout << "Anna toinen numero: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    // Tehtävä 5

    int num3, num4;

    cout << "Anna ensimmainen numero: ";
    cin >> num3;
    cout << "Anna toinen numero: ";
    cin >> num4;
    cout << num3 << " - " << num4 << " = " << num3 - num4 << endl;

    // Tehtävä 6

    int num5, num6;

    cout << "Anna ensimmainen numero: ";
    cin >> num5;
    cout << "Anna toinen numero: ";
    cin >> num6;
    cout << num5 << " * " << num6 << " = " << num5 * num6 << endl;

    // Tehtävä 7

    float num7, num8;

    cout << "Anna ensimmainen numero: ";
    cin >> num7;
    cout << "Anna toinen numero: ";
    cin >> num8;
    cout << num7 << " / " << num8 << " = " << num7 / num8 << endl;

    // Tehtävä 8

    int num9, num10, summa;

    cout << "Anna ensimmainen numero: ";
    cin >> num9;
    cout << "Anna toinen numero: ";
    cin >> num10;
    summa = num9 + num10;
    cout << num9 << " + " << num10 << " = " << summa << endl;

    // Tehtävä 9

    int num11;

    cout << "Anna kolmas numero: ";
    cin >> num11;
    cout << summa << " - " << num11 << " = " << summa - num11 << endl;

    // Tehtävä 10

    string nimi;
    int ika;

    cout << "Anna nimi: ";
    cin >> nimi;
    cout << "Anna ika: ";
    cin >> ika;
    cout << "Moi " << nimi << ", olet " << ika << " vuotta vanha." << endl;
}
