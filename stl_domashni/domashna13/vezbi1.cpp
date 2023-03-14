#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Pravoagolnik {
private:
    double sirina;
    double dolzina;
public:
    Pravoagolnik(double s, double d) : sirina(s), dolzina(d) {}

    double presmetaj_plostina() {
        return sirina * dolzina;
    }
};

class Kvadrat {
private:
    double strana;
public:
    Kvadrat(double s) : strana(s) {}

    double presmetaj_plostina() {
        return strana * strana;
    }
};

int main() {
    vector<Pravoagolnik> pravoagolnici;
    vector<Kvadrat> kvadrati;

    ifstream inFile("dimenzii.txt");
    if (!inFile) {
        cerr << "Ne mozhe da se otvori datotekata" << endl;
        exit(1);
    }

    double tip;
    while (inFile >> tip) {
        if (tip == 1) {
            double s, d;
            if (!(inFile >> s >> d)) {
                cerr << "Greshka vo formatot na vlezot" << endl;
                exit(1);
            }
            Pravoagolnik p(s, d);
            pravoagolnici.push_back(p);
        } else if (tip == 2) {
            double s;
            if (!(inFile >> s)) {
                cerr << "Greshka vo formatot na vlezot" << endl;
                exit(1);
            }
            Kvadrat k(s);
            kvadrati.push_back(k);
        } else {
            cerr << "Greshka vo formatot na vlezot" << endl;
            exit(1);
        }
    }

    double vkupno_pravoagolnici = 0;
    double vkupno_kvadrati = 0;

    // presmetka na vkupnata plostina na site pravoagolnici
   for (auto it = pravoagolnici.begin(); it != pravoagolnici.end(); ++it) {
        vkupno_pravoagolnici +=it->presmetaj_plostina();
    }

    // presmetka na vkupnata plostina na site kvadrati
     for (auto it = kvadrati.begin(); it != kvadrati.end(); ++it) {
        vkupno_kvadrati += it->presmetaj_plostina();
    }

    cout << "Vkupna plostina na pravoagolnicite: " << vkupno_pravoagolnici << endl;
    cout << "Vkupna plostina na kvadratite: " << vkupno_kvadrati << endl;

    return 0;
}
