# include <iostream>
# include <string>
using namespace std;

void testiFunktio(string sana, int luku)
{
    // cout << "Hyvää huomenta!" << endl;
    cout << sana << " " << luku << endl;
};

// int testiFunktio2(int luku, int luku1)
// {
//     return luku + luku1;
// };

// string testiFunktio3(string koulu)
// {
//     string koulunNimi = "Koulu nimi oli " + koulu;
//     return koulunNimi;
// };

// void testiFunktio3(string koulu = "Varia")
// {
//     cout << "Koulu nimi oli " << koulu << endl;
// };

// int plussa(int x, int y)
// {
//     return x + y;
// };

// double plussa(double x, double y)
// {
//     return x + y;
// };

// float plussa(float x, float y)
// {
//     return x + y;
// };

int main()
{
    string tervehdys = "Huomenta kaikki!";
    int numero = 5;

    // string tervehdys = "";
    // cin >> tervehdys;
    testiFunktio(tervehdys, numero);

    // cout << testiFunktio2(int luku, int luku1) << endl;
    // string test = testiFunktio2(int luku, int luku1);
    // cout << test << endl;
    // int vastaus = testiFunktio2(7, 9);
    // cout << vastaus << endl;

    // cout << testiFunktio3("Omnia") << endl;
    // cout << testiFunktio3("Metropolia") << endl;

    // testiFunktio3();

    // cout << plussa(5.6f, 9.1f) << endl;
    // cout << plussa(5.6, 9.3) << endl;
    // cout << plussa(5, 9) << endl;
}
