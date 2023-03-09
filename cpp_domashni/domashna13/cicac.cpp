

#include <iostream>
#include <ctime>

using namespace std;

#include "cicac.h"

Cicac::Cicac() {}

Cicac::Cicac(char *kime,char kpol,char kprezivar,int rDen,int rMesec,int rGodina, int dDen,int dMesec, int dGodina, int  vDen,int vMesec,int vGodina)
  :Zivotno(kime, kpol , rDen, rMesec, rGodina, dDen, dMesec, dGodina,vDen, vMesec, vGodina)
    {
         prezivar = (kprezivar == 'd' || kprezivar == 'n') 
                                ? kprezivar : 'n';
    }


void Cicac::prikaziPodatociC() const
{
    prikaziPodatoci();
    cout << "Prezivar: " << getPrezivar() << endl;
}

int Cicac::presmetajVakcinacija()
{
  int den= Zivotno::presmetajVakcinacija();
  return 365-den; 
}

Cicac Cicac::postavi()
{
    
    char kime[30];
    char kpol;
    char kprezivar;
    int rDen, rMesec, rGodina;
    int dDen, dMesec, dGodina;
    int vDen, vMesec, vGodina;

    cout << "Vnesi ime na zivotnoto: ";
    cin>>kime;
    cout << "Vnesi pol(m - mashki, z - zhenski): ";
    cin >> kpol;
    cout << "Vnesi dali e prezivar(d - da, n - ne): ";
    cin >> kprezivar;
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
    return Cicac(kime, kpol, kprezivar, 
                rDen, rMesec, rGodina,
               dDen, dMesec, dGodina,
                vDen, vMesec, vGodina);
}

char Cicac::getPrezivar() const
{
    return prezivar;
}