#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
class Lica {
    public:
    Lica();
    Lica(string , long long ,  int , string , T );
    Lica<T> dodadiLice() ;
    void pecati();
    //  string getImePrezime() const {return imePrezime;}
    // long getMaticenBroj() const {return maticenBroj;}
    // int getVozrast() const {return vozrast;}
    // string getAdresa() const {return adresa;}
    // T getKod() const {return kod;}
private:

        string imeiprezime;
         long long mat_br;
        int vozrast;
        string adresa;
        T kod;


};
template<class T>
Lica<T>::Lica() {}

template<class T>
Lica<T>::Lica(string imePrezime, long long maticenBroj, int vozrast, string adresa, T kod) 
{
    this->imeiprezime = imePrezime;
    this->mat_br = maticenBroj;
    this->vozrast = vozrast;
    this->adresa = adresa;
    this->kod = kod;
}

template<class T>
Lica<T> Lica<T>::dodadiLice()
{
    string imePrezime;
    long long  maticenBroj;
    int vozrast;
    string adresa;
    T kod;
    cout << "Vnesi ime i prezime: ";
    cin.ignore();
    getline(cin, imePrezime);
    cout << "Vnesi maticen broj: ";
    cin >> maticenBroj;
    cout << "Vnesi vozrast: ";
    cin >> vozrast;
    cout << "Vnesi adresa: ";
    cin.ignore();
    getline(cin, adresa);
    cout << "Vnesi kod: ";
    cin >> kod;

    return Lica(imePrezime, maticenBroj,
        vozrast, adresa, kod);
}
template<typename T>
void Lica<T>::pecati() {
         
            cout << "Ime i prezime: " << imeiprezime << endl;
            cout << "Maticen broj: " << mat_br << endl;
            cout << "Vozrast: " <<vozrast << endl;
            cout << "Adresa: " <<adresa << endl;
            cout << "Kod: " <<kod << endl << endl;
        
    }
template<class T>
void pecatiPole(T* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        arr[i].pecati();
        cout << endl;
    }
    cout << endl;
}

char opcii();
int main() {
    Lica<int> vraboteni[10];
    Lica<string> klienti[10];
    Lica <int> novV;
    Lica<string> novK;
    int k=0,v=0;
    char opcija=opcii();
        while (opcija != 'e' )
        {
            switch (opcija)
            {
                case 'a':
                    cout<<"a) Vnesuvanje na podatoci za vraboten "<<endl;
                    
                    ++v;
                    vraboteni[v-1]=novV.dodadiLice();            
                    cout<<"Vnesovte vraboten"<<endl;    
                    break;
                case 'b':
                    cout<<"b) Vnesuvanje na podatoci za klient "<<endl;
                    ++k;
                    klienti[k-1]=novK.dodadiLice();
                    cout<<"Vnesovte klient"<<endl;
                    break;    
                case 'c':
                    cout<<"c) Pecatenje na vraboteni "<<endl;
                    pecatiPole(vraboteni,v);
                    break;
                case 'd':
                    cout<<"c) Pecatenje na klienti "<<endl;
                    pecatiPole(klienti,k);             
                    break;
                default:
                    break;
            }
            opcija=opcii();
        }

    return 0;
}
char opcii()
{
    char choise;
    cout<<"a) Vnesuvanje na podatoci za vraboten "<<endl;
    cout<<"b) Vnesuvanje na podatoci za klient "<<endl;
    cout<<"c) Pecatenje na vraboteni "<<endl;
    cout<<"d) Pecatenje na klienti "<<endl;
    cout<<"e) Kraj "<<endl;
    cin >> choise;
    return choise;
}