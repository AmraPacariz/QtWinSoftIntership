
#ifndef CICAC_H
#define CICAC_H

#include "zivotno.h"

class Cicac: public Zivotno{
public:
    Cicac();
    Cicac(char *, char, char,  int, int, int,int, int, int,int, int, int);
    void prikaziPodatociC() const;
    virtual int presmetajVakcinacija();
    Cicac postavi();
    char getPrezivar() const;
private:
    char prezivar;
};
#endif