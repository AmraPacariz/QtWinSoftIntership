
#ifndef PTICA_H
#define PTICA_H

#include "zivotno.h"

class Ptica: public Zivotno{
public:
    Ptica();
    Ptica(char *, char, char,  int, int, int,int, int, int,int, int, int);
    void prikaziPodatociP() const;
    virtual int presmetajVakcinacija();
    Ptica postavi();
    char getLetac() const{return letac;};
private:
    char letac;
};
#endif