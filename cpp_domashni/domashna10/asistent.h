#ifndef ASISTENT_H
#define ASISTENT_H

using namespace std;

#include "vraboten.h"

class Asistent: public Vraboten {
    private:
        char *zvanje;
        char *mentor;
        int brPredmeti;
    
    public:
        Asistent();
        Asistent(char *, char *, int,  char *, char *, int);
        Asistent  postavi();
        // char* get_zvanje() const;
        // char* get_mentor() const;
        // int get_brPredmeti() const;
        void prikazi_podatociA() ;
};
#endif