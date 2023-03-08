
#ifndef PANTALONI_H
#define PANTALONI_H

#include "artikl.h"

class Pantaloni: public Artikl {
public:
    Pantaloni();
    Pantaloni(char *, int, int, int, int, int);
    void prikazi_podatociP() ;
    Pantaloni postaviP();
    int getDenoviDoNabavka();
private:
// Date datumZaNabavka;
};

#endif