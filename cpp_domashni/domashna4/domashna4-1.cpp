
#include <iostream>
#include "dropki.h"
using namespace std;
char opcii(); 

int main()
{
    Dropki dropka[100];
    int brojac=0,broj1,broj2;
    char opcija=opcii();
    int broitel,imenitel;

   while ( opcija != 'h')
    {  
       
        switch (opcija)
        {
        case 'a':
            cout<<"a)Napravi dropka"<<endl;
            brojac++;
            cout << "Vnesi broitel : "; cin >> broitel;
            cout << "Vnesi imenitel : "; cin >> imenitel;
            dropka[brojac-1].setirajVrednosti(broitel,imenitel);
            cout<<"Dropka ["<<brojac<<"]"<<endl; 
            dropka[brojac-1].obicnaForma();
            cout<<endl;
            break;
        case 'b':
            cout<<"b)Soberi dve dropki"<<endl; 
            cout<<"Vnesi go redniot broj na dropkite sto sakas da gi soberes"<<endl; 
            cin>>broj1;
            cin>>broj2;
            dropka[broj1-1].sobiranje(dropka[broj2-1]);

            
            break;
        case 'c':
            cout<<"c)Odzemi dve dropki"<<endl;
            cout<<"Vnesi go redniot broj na dropkite sto sakas da gi odzemes"<<endl; 
            cin>>broj1;
            cin>>broj2;
            dropka[broj1-1].odzemanje(dropka[broj2-1]);
            break;
        case 'd':
            cout<<"d)Mnozi dve dropki "<<endl; 
            cout<<"Vnesi go redniot broj na dropkite sto sakas da gi pomnozis"<<endl; 
            cin>>broj1;
            cin>>broj2;
            dropka[broj1-1].mnozenje(dropka[broj2-1]);
    
            
            break;
        case 'e':
            cout<<"e)Deli dve dropki"<<endl;
            cout<<"Vnesi go redniot broj na dropkite sto sakas da gi podelish"<<endl; 
            cin>>broj1;
            cin>>broj2;
            dropka[broj1-1].delenje(dropka[broj2-1]);
               
            break; 
        case 'f':
            cout<<"f)Prikazi dropka vo obicna forma"<<endl;
            cout<<"Vnesi go redniot broj na dropkata sto sakaas da ja prikazes vo obicna forma"<<endl; 
            cin>>broj1;
            dropka[broj1-1].obicnaForma();
               
            break;  
        case 'g':
            cout<<"g)Prikazi dropka vo forma na realen broj"<<endl;
            cout<<"Vnesi go redniot broj na dropkata sto sakaas da ja prikazes kako realen broj"<<endl; 
            cin>>broj1;
            dropka[broj1-1].realenBroj();
               
            break;      
        default:
         
            break;
        }
        opcija=opcii(); 
    }
    
    return 0;
}

char opcii() 
{   char opcija;
    cout<<"a)Napravi dropka"<<endl;
    cout<<"b)Soberi dve dropki"<<endl;
    cout<<"c)Odzemi dve dropki"<<endl;
    cout<<"d)Mnozi dve dropki "<<endl;
    cout<<"e)Deli dve dropki"<<endl;
    cout<<"f)Prikazi dropka vo obicna forma"<<endl;
    cout<<"g)Prikazi dropka vo forma na realen broj"<<endl;
    cout<<"h)KRAJ"<<endl;
    cout<<endl;
    cin>>opcija;
    cout<<endl;
    return opcija;
}