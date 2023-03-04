#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include <cstring>
#include "date.h"

class Zivotno {
public:
    Zivotno();
    Zivotno(char *, char, char, 
        int, int, int,
        int, int, int,
        int, int, int);
    void prikaziPodatoci() const ;
    int presmetajVakcinacija();
    char getTip() const  {return tip;}

private:
    char ime[30];
    char tip;
    char pol;
    Date datumNaRaganje;
    Date datumNaDonesuvanjeVoZoo;
    Date datumNaPoslednaVakcinacija;
};
#endif