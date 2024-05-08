# include <iostream>
# include <string>
using namespace std;

// class HedelmaLuokka
// {
// public:
//     string nimi;
//     string vari;
//     int painoGram;
//     string kerroNimi()
//     {
//         return nimi;
//     }
// };

class Ruoka
{
public:
    string maku;
};

class Hedelma : public Ruoka
{
private:
    string nimi;
    string vari;
    int painoGram;

public:
    Hedelma(string nimi_, string vari_, int painoGram_)
    {
        nimi = nimi_;
        vari = vari_;
        painoGram = painoGram_;
        cout << nimi << " luotu" << endl;
    }

    string GetNimi()
    {
        return nimi;
    }

    void SetNimi(string uusi_nimi)
    {
        nimi = uusi_nimi;
    }
};

class Test : public Hedelma
{
};

int main()
{
    Hedelma banaani("Banaani", "Keltainen", 100);
    Hedelma appelsiini("Appelsiini", "Oranssi", 150);

    // HedelmaLuokka banaani;
    // banaani.nimi = "Banaani";
    // banaani.vari = "Keltainen";
    // banaani.painoGram = 100;

    // HedelmaLuokka appelsiini;
    // appelsiini.nimi = "Appelsiini";
    // appelsiini.vari = "Oranssi";
    // appelsiini.painoGram = 150;

    // cout << banaani.painoGram << endl;
    // cout << appelsiini.vari << endl;
    // cout << appelsiini.kerroNimi() << endl;
    banaani.maku = "Hyvä";
    cout << banaani.maku << endl;
};
