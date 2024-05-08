# include <iostream>
# include <string>
using namespace std;

int main()
{

    string lause = "";
    string lause2 = "";
    cout << "Anna lause: ";
    getline(cin, lause);
    // cin >> lause;
    cout << lause << endl;
    cout << "Anna toinen lause: ";
    getline(cin, lause);
    cout << lause << endl;

    int eka_luku = 0;
    int toka_luku = 2;
    cout << "Anna luku ";
    cin >> eka_luku;

    switch (eka_luku)
    {
    case 0:
    {
        cout << "Luku oli 0" << endl;
    }
    break;
    case 1:
    {
        cout << "Luku oli 1" << endl;
    }
    break;
    case 2:
    {
        cout << "Luku oli 2" << endl;
    }
    break;

    default:
    {
        cout << "Luku oli X" << endl;
        cout << "Ohjelma loppui" << endl;
    }
    }

    char kirjain = 'a';
    string hello = "Hello world";
    cout << hello << endl;
    cout << "Anna kirjain ";
    cin >> kirjain;
    hello[0] = kirjain;

    if (hello[0] == 'H')
    {
        cout << "Hello world" << endl;
    }
    else if (hello[0] == 'G')
    {
        cout << "Kirjain oli G" << endl;
    }
    else
    {
        cout << hello << endl;
    }

    int numero = 0;

    cout << "Anna numero: ";
    cin >> numero;

    if (numero < 2)
    {
        cout << "Numero " << numero << " on pinempi kuin 2" << endl;
    }

    else if (numero > 2)
    {
        cout << "Numero " << numero << " on isompi kuin 2" << endl;
    }

    else
    {
        cout << "Numero on 2" << endl;
    }

    string hello = "";
    string hello2 = "";

    cout << "Anna sana: " << endl;
    cin >> hello;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Anna toka sana: " << endl;
    cin >> hello2;
    // getline(cin, hello2);
    cout << "Eka sana: " << hello << endl;
    cout << "Toka sana: " << hello2 << endl;
}
