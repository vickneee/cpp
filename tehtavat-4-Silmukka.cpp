# include <iostream>
# include <string>
using namespace std;

int main()
{
    // Tehävä 1

    int luku;

    cout << "Anna kokonaisluku: ";
    cin >> luku;
    for (int i = luku; luku >= 0; luku--)
    {
        cout << luku << endl;
    };

    // Tehtävä 2

    int luku1;

    cout << "Anna luku: ";
    cin >> luku1;

    for (int j = 1; j <= luku1; j = j + 2)
    {
        cout << j << endl;
    };

    // Tehtävä 3

    float luku2 = 0;
    int count = 0;
    float summa = 0;
    float keskiarvo;

    while (luku2 >= 0)
    {
        cout << "Insert a number, -1 will stop: ";
        cin >> luku2;
        count++;
        summa = summa + luku2;
        keskiarvo = (summa + 1) / (count - 1);
    }
    cout << "Average is: " << keskiarvo << endl;

    // Tehtävä 4

    int luku3;
    char kirjain = 'a';

    cout << "Valitse nouseva 'N' tai laskeva 'L': ";
    cin >> kirjain;
    cout << "Anna kokonaisluku: ";
    cin >> luku3;
    if (kirjain == 'L')
    {
        for (int i = luku3; luku3 >= 0; luku3--)
        {
            cout << luku3 << endl;
        }
    }
    else if (kirjain == 'N')
    {
        for (int i = 1; i <= luku3; i++)
        {
            cout << i << endl;
        }
    };

    // Tehtävä 5

    int luku4 = 1;
    int summa1 = 0;

    while (luku4 != 0)
    {
        cout << "Anna luku, 0 lopettaa: ";
        if (cin >> luku4)
        {
            summa1 = summa1 + luku4;
        }
        else
        {
            cout << "Virheellinen syöte! Yritä uudelleen." << endl;
        }
    }
    cout << "Summa on: " << summa1 << endl;

    // Tehtävä 6

    string sana = "";
    while (sana != "Lopeta")
    {
        cout << "Anna sana, 'Lopeta' lopettaa ohjelman: ";
        cin >> sana;
        cout << sana << endl;
    };

    // Tehtävä 7

    float luku5;
    float luku6;
    int vastaus = 0;

    while (vastaus != 5)
    {
        cout << "Valitse laskutoimitus: 1=+, 2=-, 3=*, 4=/ tai 5=Lopeta: ";
        cin >> vastaus;

        if (vastaus == 1)
        {
            cout << "Anna luku 1: ";
            cin >> luku5;
            cout << "Anna luku 2: ";
            cin >> luku6;
            cout << luku5 << "+" << luku6 << " = " << luku5 + luku6 << endl;
        }
        else if (vastaus == 2)
        {
            cout << "Anna luku 1: ";
            cin >> luku5;
            cout << "Anna luku 2: ";
            cin >> luku6;
            cout << luku5 << "-" << luku6 << " = " << luku5 - luku6 << endl;
        }
        else if (vastaus == 3)
        {
            cout << "Anna luku 1: ";
            cin >> luku5;
            cout << "Anna luku 2: ";
            cin >> luku6;
            cout << luku5 << "*" << luku6 << " = " << luku5 * luku6 << endl;
        }
        else if (vastaus == 4)
        {
            cout << "Anna luku 1: ";
            cin >> luku5;
            cout << "Anna luku 2: ";
            cin >> luku6;
            cout << luku5 << "/" << luku6 << " = " << luku5 / luku6 << endl;
        }
    };

    // Tehtävä 8

    string salasana = "";
    string salasanaUudelleen = "";

    cout << "Anna salasana: ";
    cin >> salasana;

    while (true)
    {
        cout << "Anna salasana uudelleen: ";
        cin >> salasanaUudelleen;
        if (salasana == salasanaUudelleen)
        {
            cout << "Käyttäjätunnus luotu!" << endl;
            break;
        }
    };

    // Tehtävä 9

    int pinkoodi;
    int pinkoodiUudelleen;
    int laskeYritykset = 0;

    cout << "Anna PIN-koodi: ";
    cin >> pinkoodi;

    while (true)
    {
        cout << "Anna PIN-koodi uudelleen: ";
        cin >> pinkoodiUudelleen;

        if (pinkoodi == pinkoodiUudelleen)
        {
            cout << "PIN-koodi oikein, tervetuloa!" << endl;
            break;
        }
        else
        {
            laskeYritykset++;
            cout << "Väärä PIN-koodi!" << endl;
            if (laskeYritykset >= 3)
            {
                cout << "Liian monta väärää yritystä!" << endl;
                break;
            }
        }
    }
};
