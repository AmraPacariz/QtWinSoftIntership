#ifndef COVEK_H
#define COVEK_H

using namespace std;
#include <string>

class Covek {
public:
    Covek();
    Covek(string, string, string, string);
    string getIme() const {return this->ime;}
    string getPrezime() const {return this->prezime;}
    void print() const;
private:
    string ime;
    string prezime;
    string adresa;
    string telefon;
};

#endif