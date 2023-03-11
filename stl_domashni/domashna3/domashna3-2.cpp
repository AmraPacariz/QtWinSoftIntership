#include <iostream>
#include <cstring>
using namespace std;


template<typename T>
class Mnozestvo {

public:
    Mnozestvo() {}
    bool dodadi(T elem);
    void pecati() const;
     T najgolem() const;
     static int brojNaElementi();
private:
    
    T elements[100];
    static  int size;
    
};
template<class T>
int Mnozestvo<T>::size = 0;
template<class T>
 bool Mnozestvo<T>::dodadi(T elem) {
        if (size >= 100) {
            return false;
        }

        for (int i = 0; i < size; ++i) {
            if (elements[i] == elem) {
                return false;
            }
        }
         
        elements[size++] = elem;
        return true;
    }
template<class T>
void Mnozestvo<T>::pecati() const {
    for (int i = 0; i < size; ++i) {
        cout << elements[i] << " ";
    }
    cout << endl;
}
template<class T>
T Mnozestvo<T>:: najgolem() const {
    T max = elements[0];
    for (int i = 1; i < size; ++i) {
        if (elements[i] > max) {
            max = elements[i];
        }
    }
    return max;
}
template<class T>
int Mnozestvo<T>:: brojNaElementi() {
     return size;
}
char opcii();
int main()
{       
    Mnozestvo<int> a;
    Mnozestvo<double> b;
    Mnozestvo<string> c;
    string cDodadi;
    double bDodadi;
    int aDodadi;

    char opcija=opcii();
        while (opcija != 'g' )
        {
            switch (opcija)
            {
                case 'a':
                    cout<<"a) Dodaj elementi vo A "<<endl;
                    cout<<"Koj element sakate da go dodadete vo A :";
                    cin>>aDodadi;
                    a.dodadi(aDodadi);
                    break;
                case 'b':
                    cout<<"b) Dodaj elementi vo B "<<endl;
                    cout<<"Koj element sakate da go dodadete vo B :";
                    cin>>bDodadi;
                    b.dodadi(bDodadi);
                   
                    break;    
                case 'c':
                    cout<<"c) Dodaj elementi vo C "<<endl;
                    cout<<"Koj element sakate da go dodadete vo C :";
                    cin.ignore();
                    getline(cin, cDodadi);
                    c.dodadi(cDodadi);
                
                    break;
                case 'd':
                    cout<<"d) Pecati elementi na A "<<endl;
                    a.pecati();
                    cout<<"Najgolem element: "<<a.najgolem()<<endl;
                    cout<<"Broj na elementi: "<<a.brojNaElementi()<<endl;
            
                    break;
                case 'e':
                    cout<<"e) Pecati elementi na B "<<endl;
                    b.pecati();
                    cout<<"Najgolem element: "<<b.najgolem()<<endl;
                    cout<<"Broj na elementi: "<<b.brojNaElementi()<<endl;
                    break;
                case 'f':
                    cout<<"f) Pecati elementi na C "<<endl;
                    c.pecati();
                    cout<<"Najgolem element: "<<c.najgolem()<<endl;
                    cout<<"Broj na elementi: "<<c.brojNaElementi()<<endl;

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
    cout<<"a) Dodaj elementi vo A "<<endl;
    cout<<"b) Dodaj elementi vo B "<<endl;
    cout<<"c) Dodaj elementi vo C "<<endl;
    cout<<"d) Pecati elementi na A "<<endl;
    cout<<"e) Pecati elementi na B "<<endl;
    cout<<"f) Pecati elementi na C "<<endl;
    cout<<"g) Kraj "<<endl;
    cin >> choise;
    return choise;
}