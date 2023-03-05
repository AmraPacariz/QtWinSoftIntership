#include <iostream>
#include "covek.h"
using namespace std;
Covek::Covek() {}
Covek::Covek(string ime, string prezime,string adresa, string telefon)
{
    this->ime=ime;
    this->prezime=prezime;
    this->telefon=telefon;
    this->adresa=adresa;
}

 void Covek:: print() const
 {
    cout<<"Ime:"<<this->ime<<endl;
    cout<<"Prezime:"<<this->prezime<<endl;
    cout<<"Telefon:"<<this->telefon<<endl;
    cout<<"Adresa:"<<this->adresa<<endl;

 }