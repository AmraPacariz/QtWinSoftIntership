#ifndef STEDAC_H
#define STEDAC_H
#include "covek.h"

class Stedac
{
 public:
    Stedac();
    ~Stedac();
    Stedac(string, string, string, string, int, int);
    void print() const;
    static int getVkupnaKamata();
    static int getBrojStedaci();
 private:
        Covek lice;
        int bilans,kredit;
        static int brojStedaci;
        static int vkupnaKamata;
}; 
#endif