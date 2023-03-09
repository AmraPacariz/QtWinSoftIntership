

#include <iostream>
#include <ctime>

using namespace std;

#include "ptica.h"

Ptica::Ptica() {}

Ptica::Ptica(char *kime,char kpol,char kletac,int rDen,int rMesec,int rGodina, int dDen,int dMesec, int dGodina, int  vDen,int vMesec,int vGodina)
  :Zivotno(kime, kpol , rDen, rMesec, rGodina, dDen, dMesec, dGodina,vDen, vMesec, vGodina)
    {
         letac = (kletac == 'd' || kletac == 'n') 
                                ? kletac : 'n';
    }


void Ptica::prikaziPodatociP() const
{
    prikaziPodatoci();
    cout<<"Letac: "<<getLetac()<<endl;
   
}

int Ptica::presmetajVakcinacija()
{
  int den= Zivotno::presmetajVakcinacija();
  return 183-den; 
}

Ptica Ptica::postavi()
{
    
    char kime[30];
    char kpol;
    char kletac;
    int rDen, rMesec, rGodina;
    int dDen, dMesec, dGodina;
    int vDen, vMesec, vGodina;

    cout << "Vnesi ime na zivotnoto: ";
    cin>>kime;
    cout << "Vnesi pol(m - mashki, z - zhenski): ";
    cin >> kpol;
    cout << "Vnesi dali e letac(d - da, n - ne): ";
    cin >> kletac;
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
    return Ptica(kime, kpol, kletac, 
                rDen, rMesec, rGodina,
               dDen, dMesec, dGodina,
                vDen, vMesec, vGodina);
}

