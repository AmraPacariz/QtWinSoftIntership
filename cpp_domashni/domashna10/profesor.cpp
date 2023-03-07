#include <iostream>
#include <cstring>
#include "profesor.h"
using namespace std;


Profesor::Profesor(){}

Profesor::Profesor(char *ime, char *prezime,int godina, char *zvanje, char *oblast, int brPredmeti1) :Vraboten(ime, prezime, godina)
{
   this->zvanje = new char[strlen(zvanje)+1 ];
    strcpy( this->zvanje, zvanje);
    this->oblast = new char[strlen(oblast)+1 ];
    strcpy( this->oblast, oblast);
    brPredmeti = brPredmeti1;
  //  cout<<"Vlegov vo konstruktorot.. zvanje: "<<this->zvanje<<"oblast:"<<this->oblast<<"brPredmeti:"<<brPredmeti<<endl;
}

Profesor Profesor::postavi() {
    char zvanje[15],oblast[20];
    int brPredmeti;
     char ime[15],prezime[20];
    int godina;
    cout<<"Vnesi ime na vraboteniot :  ";
    cin>>ime;cout<<endl;
    cout<<"Vnesi prezime na vraboteniot :  ";
    cin>>prezime;cout<<endl;
    cout<<"Vnesi godins na vrabotuvanje na vraboteniot :  ";
    cin>>godina;cout<<endl;
    cout<<"Vnesi zvanje  :  ";
    cin>>zvanje;cout<<endl;
    cout<<"Vnesi oblast :  ";
    cin>>oblast;cout<<endl;
    cout<<"Vnesi broj na predmeti :  ";
    cin>>brPredmeti;cout<<endl;
    
    return Profesor(ime,prezime,godina,zvanje,oblast,brPredmeti);
}
// char* Profesor::brPredmetiet_zvanje() const {
//     return zvanje;
// }

// char* Profesor::brPredmetiet_oblast() const {
//     return oblast;
// }

// int Profesor::get_brPredmeti() const {
//     return brPredmeti;
// }

void Profesor:: prikazi_podatociP() const {
     prikazi_podatociV();
    cout << "Zvanje: " << zvanje << endl;
    cout << "Oblast: " << oblast << endl;
    cout << "Broj na predmeti : " <<brPredmeti<< endl;
}

