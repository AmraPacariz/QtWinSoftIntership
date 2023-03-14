#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Zbor {
private:
    char znak;
    bool pogoden;
public:
    Zbor(char znak = '-', bool pogoden = false) : znak(znak), pogoden(pogoden) {}
    char get_znak() const { return znak; }
    bool get_pogoden() const { return pogoden; }
    void set_znak(char c) { znak = c; }
    void set_pogoden(bool p) { pogoden = p; }
};

int main() {
    srand(time(nullptr)); 
    vector<string> zborovi; 
    ifstream file("zborovi.txt");
    string line;
    while (getline(file, line)) {
        zborovi.push_back(line);
    }
    file.close();
    string zbor = zborovi[rand() % zborovi.size()]; 
    cout << "Zborot ima " << zbor.length() << " bukvi."<<endl;
    vector<Zbor> pogodeni(zbor.length(), Zbor());
    int pogodi = 0, obidi = 0;
    while (pogodi < zbor.length() && obidi < 15) { 
        string pogodok;
        cout << "Pogodi bukva: ";
        cin >> pogodok;
        if (pogodok.length() != 1 || !isalpha(pogodok[0]) || !islower(pogodok[0])) {
            cout << "Pogodokot treba da bide edna mala bukva."<<endl;
            continue; 
        }
        bool najden = false;
        for (int i = 0; i < zbor.length(); ++i) {
            if (zbor[i] == pogodok[0]) {
                if (!pogodeni[i].get_pogoden()) {
                    pogodeni[i].set_znak(zbor[i]);
                    pogodeni[i].set_pogoden(true);
                    pogodi++;
                }
                najden = true;
            }
        }
        if (najden) {
            cout << "Bravo! Pogodivte edna bukva."<<endl;
        } else {
            cout << "Bukvata ne se naogja vo zborot."<<endl;;
            obidi++;
        }
        cout << "Zborot: ";
        for (const Zbor& z : pogodeni) {
            if (z.get_pogoden()) {
                cout << z.get_znak() << " ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
    if (pogodi == zbor.length()) {
        cout << "Pobedivte!\n";
    } else {
        cout << "Izgubivte. Zborot beese '" << zbor << "'."<<endl;;
    }
    return 0;
}
