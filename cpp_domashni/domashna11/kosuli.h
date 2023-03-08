
#ifndef KOSULI_H
#define KOSULI_H

#include "artikl.h"

class Kosuli: public Artikl {
public:
    Kosuli();
    Kosuli(char *, int, int, int, int, int);
    void prikazi_podatociK() ;
    Kosuli postaviK();
private:
Date donesenVoProdavnica;
};

#endif