
#ifndef VLEKAC_H
#define VLEKAC_H

#include "zivotno.h"

class Vlekac: public Zivotno{
public:
    Vlekac();
    Vlekac(char *, char,  int, int, int,int, int, int,int, int, int,int,int,int);
    void prikaziPodatociV() const;
    virtual int presmetajVakcinacija();
    Vlekac postavi();

private:
    Date datumNaSlednaVakcinacija;
};
#endif