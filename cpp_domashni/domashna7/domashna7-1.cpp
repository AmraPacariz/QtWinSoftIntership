
#include <iostream>
#include "dropki.h"
using namespace std;
char opcii(); 

int main()
{
  
    int brojac=0,broj1,broj2;
    char opcija=opcii();
    int broitel,imenitel;
    Dropki dropka1,dropka2,dropka3;

   while ( opcija != 'l')
    {  
       
        switch (opcija)
        {
       
        case 'b':
            cout<<"b)Soberi dve dropki"<<endl; 
           
            cout<<"Vnesi broite i imenitel na prva dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka1.setirajVrednosti(broj1,broj2);
            cout<<"Vnesi broite i imenitel na vtora dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka2.setirajVrednosti(broj1,broj2);
             dropka3=dropka1+dropka2;
            cout<<"Rezultatot e"<<endl;
            dropka3.obicnaForma();
            cout<<endl;
            break;
        case 'c':
            cout<<"c)Odzemi dve dropki"<<endl;
           
            cout<<"Vnesi broite i imenitel na prva dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka1.setirajVrednosti(broj1,broj2);
            cout<<"Vnesi broite i imenitel na vtora dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka2.setirajVrednosti(broj1,broj2);
             dropka3=dropka1-dropka2;
            cout<<"Rezultatot e"<<endl;
            dropka3.obicnaForma();
            cout<<endl;
            break;
        case 'd':
            cout<<"d)Mnozi dve dropki "<<endl; 
           
            cout<<"Vnesi broite i imenitel na prva dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka1.setirajVrednosti(broj1,broj2);
            cout<<"Vnesi broite i imenitel na vtora dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka2.setirajVrednosti(broj1,broj2);
             dropka3=dropka1*dropka2;
            cout<<"Rezultatot e"<<endl;
            dropka3.obicnaForma();
            cout<<endl;
            break;
        case 'e':
            cout<<"e)Deli dve dropki"<<endl;
           
            cout<<"Vnesi broite i imenitel na prva dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka1.setirajVrednosti(broj1,broj2);
            cout<<"Vnesi broite i imenitel na vtora dropka:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka2.setirajVrednosti(broj1,broj2);
             dropka3=dropka1/dropka2;
            cout<<"Rezultatot e"<<endl;
            dropka3.obicnaForma();
            cout<<endl;
            break;
        case 'g':
            cout<<"g)Prikazi dropka vo forma na realen broj"<<endl; 
           
            cout<<"Vnesi broite i imenitel:"<<endl;
            cin>>broj1;
            cin>>broj2;
            dropka1.setirajVrednosti(broj1,broj2);
            break; 
        case 'h':
                cout<<"h)soberi dropka i broj"<<endl;
                
                cout<<"Vnesi broite i imenitel na  dropkata:"<<endl;
                cin>>broj1;
                cin>>broj2;
                dropka1.setirajVrednosti(broj1,broj2);
                cout<<"Vnesi broj"<<endl;
                cin>>broj1;
                 dropka3=dropka1+broj1;
                cout<<"Rezultatot e"<<endl;
                dropka3.obicnaForma();
                cout<<endl;
                break;
            case 'i':
                cout<<"i)Odzemi dropka i broj"<<endl;
                
                cout<<"Vnesi broite i imenitel na  dropkata:"<<endl;
                cin>>broj1;
                cin>>broj2;
                dropka1.setirajVrednosti(broj1,broj2);
                cout<<"Vnesi broj"<<endl;
                cin>>broj1;
                 dropka3=dropka1-broj1;
                cout<<"Rezultatot e"<<endl;
                dropka3.obicnaForma();
                cout<<endl;
                break; 
            case 'j':
                cout<<"j)mnozi dropka i broj "<<endl;
                
                cout<<"Vnesi broite i imenitel na dropkata:"<<endl;
                cin>>broj1;
                cin>>broj2;
                dropka1.setirajVrednosti(broj1,broj2);
                cout<<"Vnesi broj"<<endl;
                cin>>broj1;
                 dropka3=dropka1*broj1;
                cout<<"Rezultatot e"<<endl;
                dropka3.obicnaForma();
                cout<<endl;
                break;  
            case 'k':
                cout<<"k)deli dropka i broj "<<endl;
                
                cout<<"Vnesi broite i imenitel na dropkate:"<<endl;
                cin>>broj1;
                cin>>broj2;
                dropka1.setirajVrednosti(broj1,broj2);
                cout<<"Vnesi broj"<<endl;
                cin>>broj1;
                 dropka3=dropka1/broj1;
                cout<<"Rezultatot e"<<endl;
                dropka3.obicnaForma();
                cout<<endl;
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

    cout<<"b)Soberi dve dropki"<<endl;
    cout<<"c)Odzemi dve dropki"<<endl;
    cout<<"d)Mnozi dve dropki "<<endl;
    cout<<"e)Deli dve dropki"<<endl;
    cout<<"g)Prikazi dropka vo forma na realen broj"<<endl;
    cout<<"h)soberi dropka i broj"<<endl;
    cout<<"i)Odzemi dropka i broj"<<endl;
    cout<<"j)mnozi dropka i broj "<<endl;
    cout<<"k)deli dropka i broj"<<endl;
    cout<<"l)KRAJ"<<endl;
    cout<<endl;
    cin>>opcija;
    cout<<endl;
    return opcija;
}