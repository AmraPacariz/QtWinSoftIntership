#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <stdexcept>
#include <string>

using namespace std;

class Inventar {
public:
    int id;
    int kolicestvo;
    double cena;

    Inventar(int id, int kolicestvo, double cena) {
        this->id = id;
        this->kolicestvo = kolicestvo;
        this->cena = cena;
    }
};

int main() {
    vector<Inventar> inventar;

    
    ifstream file("inventar.txt");

    if (!file.is_open()) {
        
        throw runtime_error("Datotekata ne postoi");
    }

   
    int id, kolicestvo;
    double cena;

    while (file >> id >> kolicestvo >> cena) {
        inventar.push_back(Inventar(id, kolicestvo, cena));
    }

    double vkupna_vrednost = accumulate(inventar.begin(), inventar.end(), 0.0, [](double a, Inventar b) {
        return a + b.kolicestvo * b.cena;
    });

   
    cout << "Vkupna vrednost: " << vkupna_vrednost << endl;

    
    cout << "Artikli so kolicestvo pomalo od 10: " << endl;

    for_each(inventar.begin(), inventar.end(), [](Inventar i) {
        if (i.kolicestvo < 10) {
            cout << i.id << " " << i.kolicestvo << " " << i.cena << endl;
        }
    });

    return 0;
}
