#include <iostream>
#include "vraboten.h"
#include "Profesor.h"
#include "Asistent.h"
#include "Demonstrator.h"
using namespace std;
char opcija();
int main()
{
    Asistent asistenti[10];
    Profesor profesori[10];
    Demonstrator demonstratori[10];
    int a = 0,p = 0,d = 0;
    char opcija=opcii();
    while (opcija!='c')
    {
        switch (opcija)
        {
        case 'a':
            cout<<"a) Dodadi Vraboten "<<endl;
            cout<<"Vnesi p-profesor a-asistent d-demonstrator"<<endl;
            cin>>opcija;
            if (opcija=='p')
            {
                ++p;
                profesori[p-1].postavi();
                 cout<<"Vnesen profesor"<<endl; 
            }
            else if (opcija=='a')
            {
                ++a;
                asistenti[a-1].postavi();
                 cout<<"Vnesen asistent"<<endl; 
            }
            else if (opcija=='d')
            {
                ++d;
                demonstratori[d-1].postavi();
                cout<<"Vnesen demonstrator"<<endl; 
            }
            else
              cout<<"Greska vo vnesuvanje"<<endl;            
            
            break;
        case 'b':
            cout<<"PROFESORI:"<<endl;
            for (int i = 0; i < p; i++)
            {
                profesori[i].prikazi_podatociP();
            }
            cout<<"ASISTENTI:"<<endl;

            for (int i = 0; i < a; i++)
            {
                asistenti[i].prikazi_podatociA();
            }
            cout<<"DEMONSTRATORI:"<<endl;

            for (int i = 0; i < d; i++)
            {
                demonstratori[i].prikazi_podatociD();
            }
            break;    
        
        default:
            break;
        }
    }



    opcija=opcii();
    return 0;
}

char opcii()
{
    int choise;
    cout<<"Izberi broj: "<<endl;
    cout<<"a) Dodadi Vraboten "<<endl;
    cout<<"b) Prikazi vraboteni "<<endl;
    cout<<"c) Za kraj "<<endl;

    cin >> choise;
    return choise;
}