#include <iostream>
#include "vraboten.h"
#include "Profesor.h"
#include "Asistent.h"
#include "Demonstrator.h"
using namespace std;
char opcii();
int main()
{
    Asistent asistenti[10];
    Profesor profesori[10];
    Demonstrator demonstratori[10];
    int a = 0,p = 0,d = 0;
    char opcija=opcii();
    while (opcija != 'c' )
    {
        switch (opcija)
        {
            case 'a':
                char opc;
                cout<<"a) Dodadi Vraboten "<<endl;
                cout<<"Vnesi p-profesor a-asistent d-demonstrator"<<endl;
                cin>>opc;
                    if (opc=='p')
                    {
                        ++p;
                        profesori[p-1]=profesori[p-1].postavi();
                        cout<<"Vnesen profesor"<<endl; 
                    }
                    else if (opc=='a')
                    {
                        ++a;
                        asistenti[a-1]=asistenti[a-1].postavi();
                        cout<<"Vnesen asistent"<<endl; 
                    }
                    else if (opc=='d')
                    {
                        ++d;
                      demonstratori[d-1]=demonstratori[d-1].postavi();
                        cout<<"Vnesen demonstrator"<<endl; 
                    }
                    else
                    cout<<"Greska vo vnesuvanje"<<endl;            
                    
                break;
            case 'b':
                cout<<"PROFESORI:"<<endl;
                if(p==0){cout<<"Nema Profesori"<<endl;}
                for (int i = 0; i < p; i++)
                {   cout<<"["<<i+1<<"]"<<endl;

                    profesori[i].prikazi_podatociP();
                    cout<<endl;
                }
                cout<<"ASISTENTI:"<<endl;
                if(a==0){cout<<"Nema Asistenti"<<endl;}
                for (int i = 0; i < a; i++)
                {
                     cout<<"["<<i+1<<"]"<<endl;
                    asistenti[i].prikazi_podatociA();
                      cout<<endl;
                }
                cout<<"DEMONSTRATORI:"<<endl;
                if(d==0){cout<<"Nema Demonstratori"<<endl;}
                for (int i = 0; i < d; i++)
                {
                    cout<<"["<<i+1<<"]"<<endl;
                    demonstratori[i].prikazi_podatociD();
                      cout<<endl;
                }
                break;    

            
            default:
                break;
        }
        opcija=opcii();
    }



    
    return 0;
}

char opcii()
{
    char choise;
    cout<<"Izberi bukva: "<<endl;
    cout<<"a) Dodadi Vraboten "<<endl;
    cout<<"b) Prikazi vraboteni "<<endl;
    cout<<"c) Za kraj "<<endl;

    cin >> choise;
    return choise;
}