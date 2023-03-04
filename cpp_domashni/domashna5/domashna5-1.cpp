#include <iostream>
#include "zivotno.h"
using namespace std;
char opcii(); 
Zivotno vnesiZivotno();
int main()
{   Zivotno zivotni[100];
    int brojac=0;
    char opcija=opcii();
   

   while ( opcija != 'f')
    {   switch (opcija)
        {
        case 'a':
            cout<<"a)Dodadi novo zivotno"<<endl;
            brojac++;
            zivotni[brojac-1]=vnesiZivotno();
            break;
        case 'b':
            cout<<"b)Prikazi brojna sostojba"<<endl;
            cout<<"Momentalno imame: "<<brojac<<"zivotni"<<endl;
        
            break;
        case 'c':
            cout<<"c)Prikazi zivotni od dadena grupa"<<endl;
            char grupa;
            cout<<"Vnesi tip(c - cicachi, v - vlekachi, p - ptici): "<<endl;
            cin >> grupa;
            for (int i = 0; i < brojac; i++)
            {
                if(zivotni[i].getTip() == grupa){
                    zivotni[i].prikaziPodatoci(); cout<<endl;
                }
            }
            break;
        case 'd':
            cout<<"d)Prikazi site zivotni "<<endl;
            for (int i = 0; i < brojac; i++)
                
                zivotni[i].prikaziPodatoci(); cout<<endl;
            break;
        case 'e':
        cout<<"e)Prikazi zivotni za vakcinacija"<<endl;
        for (int i = 0; i < brojac; i++)
        {
            if(zivotni[i].presmetajVakcinacija() < 8)
            {
                zivotni[i].prikaziPodatoci(); cout<<endl;
            }
        }
            
           
            break; 

        default:
         
            break;
        }
     opcija=opcii(); 
      cout<<endl;
    }
    return 0;
}
char opcii()
{
    char choise;
   
    cout<<"a)Dodadi novo zivotno"<<endl;
    cout<<"b)Prikazi brojna sostojba"<<endl;
    cout<<"c)Prikazi zivotni od dadena grupa"<<endl;
    cout<<"d)Prikazi site zivotni "<<endl;
    cout<<"e)Prikazi zivotni za vakcinacija"<<endl;
    cout<<"f)KRAJ"<<endl;
    cout<<endl;
    cin >> choise;
    return choise;
}

Zivotno vnesiZivotno()
{
    char kime[30];
    char ktip;
    char kpol;
    int rDen, rMesec, rGodina;
    int dDen, dMesec, dGodina;
    int vDen, vMesec, vGodina;

    cout << "Vnesi ime na zivotnoto: ";
    cin>>kime;
    cout << "Vnesi tip(c - cicachi, v - vlekachi, p - ptici): ";
    cin >> ktip;
    cout << "Vnesi pol(m - mashki, z - zhenski): ";
    cin >> kpol;
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

    Zivotno novo (kime, ktip, kpol, 
                      rDen, rMesec, rGodina,
                      dDen, dMesec, dGodina,
                      vDen, vMesec, vGodina);
    return novo;
}