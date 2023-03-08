#include <iostream>
#include <cstring>
#include "artikl.h"
using namespace std;
#include <iostream>
#include <cstring>

using namespace std;

#include "artikl.h"

Artikl::Artikl(){}

Artikl::Artikl(char *ime, int golemina, int cena, int den, int mesec, int godina):donesenVoProdavnica(den, mesec, godina)
{
    this->ime = new char[strlen(ime) + 1];
    strcpy(this->ime, ime);
    this->golemina = golemina;
    this->cena = cena;
}
Artikl Artikl::postaviA() {
    char ime[15];
    int golemina,cena,den,mesec,godina;

    cout <<"Ime na artiklot: " ; 
    cin>>ime;
    cout <<"Golemina: " ;
    cin>>golemina;
    cout <<"Cena: ";
    cin>> cena;
    cout <<"Donesen vo prodavnica: ";
    cin>>den>>mesec>>godina;
    

    return Artikl(ime,golemina,cena,den,mesec,godina);
}
Date Artikl::getDonesenVoProdavnica() const
{
    return Date();
}
void Artikl::prikazi_podatociA()
{
    cout <<"Ime na artiklot: " <<ime<<endl;
    cout <<"Golemina: " << golemina <<endl;
    cout <<"Cena: " << cena <<endl;
    cout <<"Donesen vo prodavnica: ";donesenVoProdavnica.print();

}
