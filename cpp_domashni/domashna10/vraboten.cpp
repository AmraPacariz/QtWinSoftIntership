#include <iostream>
#include <cstring>
#include "vraboten.h"
using namespace std;


Vraboten::Vraboten(){}
Vraboten:: Vraboten(char *ime, char *prezime, int g) {
   this->ime = new char[strlen(ime)+1 ];
    strcpy( this->ime, ime);
    this->prezime = new char[strlen(prezime)+1 ];
    strcpy( this->prezime, prezime);
    godina = g;
  //  cout<<"Vlegov vo konstruktorot ime: "<<this->ime<<"prezime:"<<this->prezime<<"godina:"<<godina<<endl;
}

Vraboten Vraboten::postavi() {
    char ime[15],prezime[20];
    int godina;
    cout<<"Vnesi ime na vraboteniot :  ";
    cin>>ime;cout<<endl;
    cout<<"Vnesi prezime na vraboteniot :  ";
    cin>>prezime;cout<<endl;
    cout<<"Vnesi godins na vrabotuvanje na vraboteniot :  ";
    cin>>godina;cout<<endl;

        return Vraboten(ime,prezime,godina);
}
// char* Vraboten::get_ime() const {
//     return ime;
// }

// char* Vraboten::get_prezime() const {
//     return prezime;
// }

// int Vraboten::get_godina_na_vrabotuvanje() const {
//     return godina;
// }

void Vraboten:: prikazi_podatociV() const {//ne pecati ime i prezime nz zasto a za godina mi dava nesto random
    cout << "Ime: " << ime << endl;
    cout << "Prezime: " << prezime << endl;
    cout << "Godina na vrabotuvanje: " <<godina<< endl;
}

