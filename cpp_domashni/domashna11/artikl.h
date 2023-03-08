#ifndef ARTIKL_H
#define ARTIKL_H
#include "date.h"
using namespace std;

class Artikl {

    
    public:
        Artikl();
        Artikl(char *, int, int, int, int, int);
        Artikl  postaviA();
        // char* getIme() const;
        // int getGolemina() const;
         int getCena(){return cena;}
        Date getDonesenVoProdavnica() const;
        void prikazi_podatociA() ;
private:
    char *ime;
    int golemina;
    int cena;
    Date donesenVoProdavnica;
};
#endif