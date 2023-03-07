#ifndef PROFESOR_H
#define PROFESOR_H

using namespace std;

#include "Vraboten.h"

class Profesor: public Vraboten {
    private:
        char *zvanje;
        char *oblast;
        int brPredmeti;
    
    public:
        Profesor();
        Profesor(char *, char *, int,  char *, char *, int);
        Profesor  postavi();
        // char* get_zvanje() const;
        // char* get_oblast() const;
        // int get_brPredmeti() const;
        void prikazi_podatociP() const;
};
#endif