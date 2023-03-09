#include <iostream>
#include "zivotno.h"
#include "vlekac.h"
#include "ptica.h"
#include "cicac.h"
using namespace std;
char opcii(); 

int main()
{   Ptica ptici[50];
    Vlekac vlekaci[50];
    Cicac cicaci[50];
    int p=0,v=0,c=0;
    char grupa;
    char opcija=opcii();
   

   while ( opcija != 'f')
    {   switch (opcija)
        {
        case 'a':
            cout<<"a)Dodadi novo zivotno"<<endl;
             cout<<"Vnesi tip(c - cicachi, v - vlekachi, p - ptici): ";
            cin >> grupa;

            if (grupa == 'c')
            {
                c++;
                cicaci[c-1]=cicaci[c-1].postavi();
            }
            else if (grupa == 'p')
            {
                p++;
                ptici[p-1]=ptici[p-1].postavi();
            }
            else if (grupa == 'v')
            {
                v++;
                vlekaci[v-1]=vlekaci[v-1].postavi();
            }
            else
            cout<<"Greshen vlez"<<endl;
            cout<<endl;
            

            break;
        case 'b':
            cout<<"b)Prikazi brojna sostojba"<<endl;
            cout<<"Momentalno imame: "<<p+c+v<<"zivotni"<<endl;
            cout<<"Cicaci: "<<c<<endl;
            cout<<"Ptici: "<<p<<endl;
            cout<<"Vlekaci: "<<v<<endl;
        
            break;
        case 'c':
            cout<<"c)Prikazi zivotni od dadena grupa"<<endl;
           
            cout<<"Vnesi tip(c - cicachi, v - vlekachi, p - ptici): ";
            cin >> grupa;
            if (grupa == 'c')
            {  cout<<"Cicaci:"<<endl;
              for (int i = 0; i < c; i++)
              {  
                cout<<"["<<i<<"]"<<endl;
                cicaci[i].prikaziPodatociC();
                cout<<endl;
              }
              
            }
            else if (grupa == 'p')
            {
              cout<<"Pticii:"<<endl;
              for (int i = 0; i < p; i++)
              {  
                cout<<"["<<i<<"]"<<endl;
                ptici[i].prikaziPodatociP();
                cout<<endl;
              }
            }
            else if (grupa == 'v')
            {
              cout<<"Vlekaci:"<<endl;
              for (int i = 0; i < v; i++)
              {  
                cout<<"["<<i<<"]"<<endl;
                vlekaci[i].prikaziPodatociV();
                cout<<endl;
              }
                
            }
            else
            cout<<"Greshen vlez"<<endl;
            cout<<endl;
            

            break;
        case 'd':
            cout<<"d)Prikazi site zivotni "<<endl;
            cout<<"Cicaci:"<<endl;
            for (int i = 0; i < c; i++)
            {  
                cout<<"["<<i<<"]"<<endl;
                cicaci[i].prikaziPodatociC();
                cout<<endl;
            }
            cout<<"Vlekaci:"<<endl;
            for (int i = 0; i < v; i++)
            {  
                cout<<"["<<i<<"]"<<endl;
                vlekaci[i].prikaziPodatociV();
                cout<<endl;
            }
            cout<<"Pticii:"<<endl;
            for (int i = 0; i < p; i++)
            {  
                cout<<"["<<i<<"]"<<endl;
                ptici[i].prikaziPodatociP();
                cout<<endl;
            }

            break; 
        case 'e':
            cout<<"e)Prikazi zivotni za vakcinacija"<<endl;
            cout<<"Cicaci:"<<endl;
            for (int i = 0; i < c; i++)
            {  
               if(cicaci[i].presmetajVakcinacija() < 8)
                    cicaci[i].prikaziPodatociC();
                    cout<<endl;
            }
            cout<<"Vlekaci:"<<endl;
            for (int i = 0; i < v; i++)
            {  
                if(vlekaci[i].presmetajVakcinacija() < 8)
                    vlekaci[i].prikaziPodatociV();
                    cout<<endl;
            }
            cout<<"Pticii:"<<endl;
            for (int i = 0; i < p; i++)
            {  
                if(ptici[i].presmetajVakcinacija() < 8)
                    ptici[i].prikaziPodatociP();
                    cout<<endl;
            }
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

