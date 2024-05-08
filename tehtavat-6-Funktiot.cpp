# include <iostream>
# include <string>
using namespace std;

// Tehtävä 1:

// void tervehdi();

// int main()
// {
//     tervehdi();
// }

// void tervehdi()
// {
//     cout << "Terve maailma" << endl;
// }

// Tehtävä 2:

// void tulosta_nollat(int luku);

// int main()
// {
//     int luku;
//     do
//     {
//         cout << "Anna positiivinen kokonaisluku: ";
//         cin >> luku;
//     } while (luku <= 0);

//     tulosta_nollat(luku);
//     cout << endl;
// }

// void tulosta_nollat(int luku)
// {
//     for (int i = 0; i < luku; i++)
//     {
//         cout << "0";
//     }
// }

// Tehtävä 3:

// void tulosta_sana(string sana);

// int main()
// {
//     string syote;
//     cout << "Anna sana: ";
//     cin >> syote;
//     tulosta_sana(syote);
//     cout << endl;
// }

// void tulosta_sana(string sana)
// {
//     cout << "Sana oli: " << sana;
// }

// Tehtävä 4:

// void tulosta_sana_n_kertaa(string sana, int n);

// int main()
// {
//     string syote;
//     int luku;
//     cout << "Anna sana: ";
//     getline(cin, syote);
//     cout << "Anna luku: ";
//     cin >> luku;
//     tulosta_sana_n_kertaa(syote, luku);
//     cout << endl;
// }

// void tulosta_sana_n_kertaa(string sana, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << sana << endl;
//     }
// }

// Tehtävä 5;

// int laske(int luku1, int luku2, char merkki);

// int main()
// {
//     int luku1, luku2, tulos;
//     char merkki;

//     cout << "Anna ensimmäinen luku: ";
//     cin >> luku1;

//     cout << "Anna toinen luku: ";
//     cin >> luku2;

//     cout << "Anna laskutoimituksen merkki (+, -, *): ";
//     cin >> merkki;

//     tulos = laske(luku1, luku2, merkki);

//     cout << "Vastaus: " << tulos << endl;
// }

// int laske(int luku1, int luku2, char merkki)
// {
//     int tulos;
//     if (merkki == '+')
//     {
//         tulos = luku1 + luku2;
//     }
//     else if (merkki == '-')
//     {
//         tulos = luku1 - luku2;
//     }
//     else if (merkki == '*')
//     {
//         tulos = luku1 * luku2;
//     }
//     else
//     {
//         cout << "Virheellinen merkki!" << endl;
//         tulos = 0;
//     }
//     return tulos;
// }

// Tehtävä 6;

void tulosta_risuaita(int leveys, int korkeus);

int main()
{
    int luku1, luku2;

    cout << "Anna kaksi lukua: ";
    cin >> luku1 >> luku2;

    tulosta_risuaita(luku1, luku2);
}

void tulosta_risuaita(int leveys, int korkeus)
{
    for (int i = 0; i < korkeus; i++)
    {
        for (int j = 0; j < leveys; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
}
