#include <iostream>
#include <cstring>
#include "demonstrator.h"
using namespace std;


Demonstrator::Demonstrator(){}

Demonstrator::Demonstrator(char *ime, char *prezime,int godina, int vOd,int vDo):Vraboten(ime, prezime, godina)
{
  this->vremeOd=vOd;
  this->vremeDo=vDo;
 
}

Demonstrator Demonstrator::postavi() {

    int vDo,vOd;
     char ime[15],prezime[20];
    int godina;
    cout<<"Vnesi ime na Demonstratorot :  ";
    cin>>ime;cout<<endl;
    cout<<"Vnesi prezime na Demonstratorot :  ";
    cin>>prezime;cout<<endl;
    cout<<"Vnesi godins na vrabotuvanje na Demonstratorot :  ";
    cin>>godina;cout<<endl;
    cout<<"Vnesi pocetok na rabotno vreme :  ";
    cin>>vOd;cout<<endl;
    cout<<"Vnesi vnesi kraj na rabotno vreme :  ";
    cin>>vDo;cout<<endl;
     
     
    
    return Demonstrator(ime,prezime,godina,vOd,vDo);
}


// int Demonstrator::get_vremeOd() const {
//     return vremeOd;
// }
// int Demonstrator::get_vremeDo() const {
//     return vremeDo;
// }

void Demonstrator:: prikazi_podatociD()  {
     prikazi_podatociV();
     cout<<"Pocetok na rabotno vreme :  "<<vremeOd<<endl;
     cout<<"Kraj na rabotno vreme :  "<<vremeDo<<endl;


}

