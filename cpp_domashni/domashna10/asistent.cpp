#include <iostream>
#include <cstring>
#include "asistent.h"
using namespace std;


Asistent::Asistent(){}

Asistent::Asistent(char *ime, char *prezime,int godina, char *zvanje, char *mentor, int brPredmeti1) :Vraboten(ime, prezime, godina)
{
   this->zvanje = new char[strlen(zvanje)+1 ];
    strcpy( this->zvanje, zvanje);
    this->mentor = new char[strlen(mentor)+1 ];
    strcpy( this->mentor, mentor);
    brPredmeti = brPredmeti1;
  //  cout<<"Vlegov vo konstruktorot.. zvanje: "<<this->zvanje<<"mentor:"<<this->mentor<<"brPredmeti:"<<brPredmeti<<endl;
}

Asistent Asistent::postavi() {
    char zvanje[15],mentor[20];
    int brPredmeti;
     char ime[15],prezime[20];
    int godina;
    cout<<"Vnesi ime na asistentot :  ";
    cin>>ime;cout<<endl;
    cout<<"Vnesi prezime na asistentot :  ";
    cin>>prezime;cout<<endl;
    cout<<"Vnesi godins na vrabotuvanje na asistentot :  ";
    cin>>godina;cout<<endl;
    cout<<"Vnesi zvanje  :  ";
    cin>>zvanje;cout<<endl;
    cout<<"Vnesi mentor :  ";
    cin>>mentor;cout<<endl;
    cout<<"Vnesi broj na predmeti :  ";
    cin>>brPredmeti;cout<<endl;
    
    return Asistent(ime,prezime,godina,zvanje,mentor,brPredmeti);
}
// char* Asistent::brPredmetiet_zvanje() const {
//     return zvanje;
// }

// char* Asistent::get_mentor() const {
//     return mentor;
// }

// int Asistent::get_brPredmeti() const {
//     return brPredmeti;
// }

void Asistent:: prikazi_podatociA()  {
     prikazi_podatociV();
    cout << "Zvanje: " << zvanje << endl;
    cout << "Mentor: " << mentor << endl;
    cout << "Broj na predmeti : " <<brPredmeti<< endl;
}

