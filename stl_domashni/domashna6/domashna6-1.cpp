#include <iostream>
#include <map>
#include <string>

using namespace std;

class Uplata {
private:
    string stedac;
    int iznos;
public:
    Uplata(string stedac, int iznos) {
        this->stedac = stedac;
        this->iznos = iznos;
    }
    string getStedac() const {
        return stedac;
    }
    int getIznos() const {
        return iznos;
    }
};
char opcii();
int main() {
    multimap<string, Uplata> uplati;
    int izbor;
    string stedac;
    int iznos;
    int vkupno;
    char opcija=opcii();
        while (opcija != 'c' ) {
      

        switch (opcija) {
            case 'a': {
                cout << "a. Dodaj uplata" << endl;
                cout << "Vnesi ime na stedac: ";
                cin >> stedac;
                cout << "Vnesi iznos: ";
                cin >> iznos;
                uplati.insert(pair<string, Uplata>(stedac, Uplata(stedac, iznos)));
                break;
            }
            case 'b': {
                cout << "b. Prikazi uplati za daden stedac" << endl;
                cout << "Vnesi ime na stedac: ";
                cin >> stedac;
                vkupno = 0;
                cout << "Uplatite na stedacot " << stedac << " se: " << endl;
                auto range = uplati.equal_range(stedac);
                for (auto it = range.first; it != range.second; ++it) {
                    cout << " - " << it->second.getIznos() << endl;
                    vkupno += it->second.getIznos();
                }
                cout << "Vkupno: " << vkupno << endl;
                break;
            }
            case 'c': {
                break;
            }
            default: {
                cout << "Nevaliden izbor. Vnesi povtorno." << endl;
                break;
            }
        }
        opcija=opcii();
    } 

    return 0;
}
char opcii()
{
    char choise;
    cout << "\na. Dodaj uplata" << endl;
    cout << "b. Prikazi uplati za daden stedac" << endl;
    cout << "c. Kraj" << endl;
    cout<<endl;
    cin >> choise;
    return choise;
}