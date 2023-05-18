# include <iostream>
# include <string>
using namespace std;

int main()
{
    // Tehävä 1

    string sanat[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Anna sana " << i + 1 << ": ";
        cin >> sanat[i];
    }

    // Ensimmäinen, kolmas ja viides sana
    cout << "Ensimmäinen sana: " << sanat[0] << endl;
    cout << "Kolmas sana: " << sanat[2] << endl;
    cout << "Viides sana: " << sanat[4] << endl;

    // Tehävä 2

    // Sanat[0] arvoksi "Tiistai"
    sanat[0] = "Tiistai";

    for (int i = 0; i < 5; i++)
    {
        cout << "Tulosta " << i + 1 << ". sana: " << sanat[i] << endl;
    }

    // Tehtävä 3

    int numero;
    do
    {
        cout << "Syötä numero väliltä 1-5: ";
        cin >> numero;
    } while (numero < 1 || numero > 5);

    // Sana arvoksi "Varia"
    sanat[numero - 1] = "Varia";
    cout << "Taulukon sisältö:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << sanat[i] << endl;
    }

    // Tehtävä 4

    const int max_koko = 100;
    int luku;
    int taulukko[max_koko];
    int alkuparainen_taulukko[max_koko];
    int i = 0;

    do
    {
        cout << "Anna numero (-1 lopettaa): ";
        cin >> luku;

        if (luku != -1)
        {
            taulukko[i] = luku;
            i++;
        }

    } while (luku != -1 && i < max_koko);

    // Alkuperäinen taulukko
    for (int j = 0; j < i; j++)
    {
        alkuparainen_taulukko[j] = taulukko[j];
    }

    // Järjestä numerot taulukkossa
    sort(taulukko, taulukko + i);

    // Järjestetty taulukko
    cout << "Järjestetty taulukko: ";
    for (int j = 0; j < i; j++)
    {
        cout << taulukko[j] << " ";
    }
    cout << endl;

    // Tulosta Alkuperäinen taulukko
    cout << "Alkuperäinen taulukko: ";
    for (int j = 0; j < i; j++)
    {
        cout << alkuparainen_taulukko[j] << " ";
    }
    cout << endl;

    // Tehtävä 5

    // Pienin
    cout << "Pienin alkio: " << taulukko[0] << endl;
    // Suurin
    cout << "Suurin alkio: " << taulukko[i - 1] << endl;

    // Tehtävä 6

    float summa = 0;

    // Summa
    for (int j = 0; j < i; j++)
    {
        summa += taulukko[j];
    }

    cout << "Summa: " << summa << endl;
}
