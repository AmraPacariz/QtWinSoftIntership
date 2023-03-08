#ifndef DEMONSTRATOR_H
#define DEMONSTRATOR_H

using namespace std;

#include "vraboten.h"

class Demonstrator: public Vraboten {
    private:

        int vremeOd;
        int vremeDo;
    
    public:
        Demonstrator();
        Demonstrator(char *, char *, int,  int, int);
        Demonstrator  postavi();
        // int get_vremeOd() const;
        // int get_vremeDo() const;
        void prikazi_podatociD() ;
};
#endif