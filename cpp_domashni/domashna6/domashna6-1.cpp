#include <iostream>
using namespace std;

#include "stedac.h"
#include "covek.h"

int main()
{
    cout << "Broj na stedaci pred instanciranje e: " << Stedac::getBrojStedaci() << endl;   // koristi ime na klasata

    Stedac *e1Ptr = new Stedac( "Suzana", "Spasovska","adresa1","telefon1",1000,1000 );
    Stedac *e2Ptr = new Stedac( "Goce", "Arnaudov", "adresa2","telefon2",1000,1000 );

    cout << "Broj na stedaci po instanciranje e: "<< e1Ptr->getBrojStedaci();
    cout<<endl;
    e1Ptr->print();
    e2Ptr->print();
    cout << "Vkupna  kamata: "<< e1Ptr->getVkupnaKamata()<<endl;


    delete e1Ptr;   // vrati memorija
    e1Ptr = 0;
    delete e2Ptr;   // vrati memorija
    e2Ptr = 0;

    cout << "Broj na stedaci po brishenje e: " << Stedac::getBrojStedaci() << endl;
        cout << "Kamatata po brishenje na stedacite e: " << Stedac::getVkupnaKamata() << endl;


    return 0;
} // kraj main
