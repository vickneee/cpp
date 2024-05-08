# include <iostream>
# include <string>
# include <iterator>
using namespace std;

int main()
{
    // Lista/taulukko/array
    int numerot[3];
    numerot[0] = 5;
    numerot[1] = 10;
    numerot[2] = 15;
    cout << numerot[1] << endl;

    string koulut[] = {"Varia", "Keuda", "Omnia"};
    for (int i = 0; i < 3; i++)
    {
        cout << koulut[i] << endl;
    }

    cout << koulut[0][0] << endl;

    koulut[1] = "Metropolia";
    for (int i = 0; i < 3; i++)
    {
        cout << koulut[i] << endl;
    }
    // cout << koulut[3] << endl; // Tulosta random asioita,
    // koska lista pituus on mennyt yli

    for (string i : koulut) // For Each Loop Listojen läpikäynti
    {
        cout << i << endl;
    }

    cout << endl;

    cout << sizeof(koulut) << endl;                     // Tavujen määrä
    cout << sizeof(koulut) / sizeof(koulut[0]) << endl; // Listaan pituus

    cout << sizeof(numerot) << endl;                      // Tavujen määrä
    cout << sizeof(numerot) / sizeof(numerot[0]) << endl; // Listaan pituus

    cout << endl;

    /* cout << size(koulut) << endl;  // Listaan pituus
    cout << size(numerot) << endl; // Listaan pituus */

    int numerot1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << numerot1[i][j] << endl;
        }
        cout << endl;
    }
}
