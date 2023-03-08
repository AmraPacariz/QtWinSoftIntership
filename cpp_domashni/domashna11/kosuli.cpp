
#include <iostream>
#include <ctime>

using namespace std;

#include "kosuli.h"

Kosuli::Kosuli(){}

Kosuli::Kosuli(char *ime, int golemina,int cena, int den, int mesec, int godina):Artikl(ime, golemina, cena,den,mesec,godina)
 {}

void Kosuli::prikazi_podatociK()
{
    prikazi_podatociA();
}




Kosuli Kosuli::postaviK()
{
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
    

    return Kosuli(ime,golemina,cena,den,mesec,godina);
}