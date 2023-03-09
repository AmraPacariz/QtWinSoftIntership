

#include <iostream>
#include <ctime>

using namespace std;

#include "vlekac.h"

Vlekac::Vlekac() 
        : datumNaSlednaVakcinacija(01,01,2007){}

Vlekac::Vlekac(char *kime,char kl,int rDen,int rMesec,int rGodina, int dDen,int dMesec, int dGodina, int  vDen,int vMesec,int vGodina,int sDen, int sMesec,int  sGodina)
  :Zivotno(kime, kl , rDen, rMesec, rGodina, dDen, dMesec, dGodina,vDen, vMesec, vGodina),
  datumNaSlednaVakcinacija(sMesec,sDen,sGodina)
  {}
void Vlekac::prikaziPodatociV() const
{
    prikaziPodatoci();
    cout<<"Data na sledna vakcinacija";datumNaSlednaVakcinacija.print();cout<<endl;
}

int Vlekac::presmetajVakcinacija()
{
  time_t now = time(0);
   


     struct tm sledna_vakcinacija;

    sledna_vakcinacija.tm_year = datumNaSlednaVakcinacija.getYear()-1900;
    sledna_vakcinacija.tm_mon = datumNaSlednaVakcinacija.getMonth()-1;
    sledna_vakcinacija.tm_mday = datumNaSlednaVakcinacija.getDay();
    sledna_vakcinacija.tm_hour = 0;
    sledna_vakcinacija.tm_min = 0;
    sledna_vakcinacija.tm_sec = 0;
     time_t sledna_vakcinacija_2 = mktime(&sledna_vakcinacija);

    const int seconds_per_day = 60 * 60 * 24;
    int difference_in_seconds = difftime(now, sledna_vakcinacija_2);
    int days = difference_in_seconds / seconds_per_day;
      
      
    return days;
 
}

Vlekac Vlekac::postavi()
{
    
    char kime[30];
    char kl;

    int rDen, rMesec, rGodina;
    int dDen, dMesec, dGodina;
    int vDen, vMesec, vGodina;
       int sDen, sMesec, sGodina;
    cout << "Vnesi ime na zivotnoto: ";
    cin>>kime;
    cout << "Vnesi pol(m - mashki, z - zhenski): ";
    cin >> kl;

    cout << "Vnesi datum na raganje na zivotnoto [d/m/g]: ";
    cin >> rDen;
    cin >> rMesec;
    cin >> rGodina;
    cout << "Vnesi datum na doaganje na zivotnoto[d/m/g]: ";
    cin >> dDen;
    cin >> dMesec;
    cin >> dGodina;
    cout << "Vnesi datum na posledna vakcinacija na " 
            "zivotnoto [d/m/g]: ";
    cin >> vDen;
    cin >> vMesec;
    cin >> vGodina;
    cout << "Vnesi datum na sledna vakcinacija na " 
        "zivotnoto [d/m/g]: ";
    cin >> sDen;
    cin >> sMesec;
    cin >> sGodina;
    return Vlekac(kime, kl,
                rDen, rMesec, rGodina,
               dDen, dMesec, dGodina,
                vDen, vMesec, vGodina,sDen, sMesec, sGodina);
}

