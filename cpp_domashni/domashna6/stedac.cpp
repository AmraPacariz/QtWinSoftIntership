#include <iostream>
#include "stedac.h"
using namespace std;
#include "Covek.h"
#include "Stedac.h"

int Stedac::vkupnaKamata = 0;
int Stedac::brojStedaci = 0;


Stedac::Stedac(){}
Stedac::Stedac(string ime, string prezime , string adresa , string telefon, int kredit, int bilans)
        :lice(ime,prezime,adresa,telefon)
{
    this->bilans = bilans;
    this->kredit = kredit;
    vkupnaKamata+=(kredit/100)*2;/*nz kako saka da ja racunam vkupnata kamata ne e kazano vo zadacata*/
    ++brojStedaci;
}
void  Stedac::print() const{
     lice.print();
     cout<<"Bilans: "<<this->bilans<<endl;
     cout<<"Kredit: " <<this->kredit<<endl;
     cout<<endl;

}
int   Stedac::  getVkupnaKamata(){return vkupnaKamata;}
int   Stedac::   getBrojStedaci(){return brojStedaci;}
Stedac::~Stedac(){--brojStedaci;
vkupnaKamata-=(this->kredit/100)*2;}