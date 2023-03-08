#include <iostream>

using namespace std;

#include "pantaloni.h"
#include "kosuli.h"

char opcii();

int main()
{
        char opcija;
        Pantaloni pantaloni[100];
        Kosuli kosuli[100];
        int p = 0;
        int k = 0;

        char opcija=opcii();
        while (opcija != 'e' )
        {
            switch (opcija)
            {
                case 'a':
                    cout<<"a) Dodavanje na artikl vo listata "<<endl;                            
                    cout<<"p-pantaloni k-koshula: ";
                    cin>>opcija;  
                    if(opcija=='p')
                    {
                        p++;
                        pantaloni[p-1]=pantaloni[p-1].postaviP();
                    }  
                    else if(opcija=='k')
                    {
                        k++;
                        kosuli[k-1]=kosuli[k-1].postaviK();
                    }   
                    else
                    cout<<"Greshen vlez"<<endl; 
                    break;
                case 'b':
                    cout<<"b) Prikazuvanje na artikli od dadena grupa "<<endl;                         
                    cout<<"p-pantaloni k-koshula: ";
                    cin>>opcija;  
                    if(opcija=='p')
                    {
                       for (int i = 0; i < p; i++)
                       {
                        pantaloni[i].prikazi_podatociP();
                       }
                       
                    }  
                    else if(opcija=='k')
                    {
                        for (int i = 0; i < k; i++)
                       {
                        kosuli[i].prikazi_podatociK();
                       }
                    }   
                    else
                    cout<<"Greshen vlez"<<endl; 
                    break;    
                case 'c':
                          int cena=0;
                          for ( int i = 0; i < p; i++)
                            {
                            pantaloni[i].prikazi_podatociP();
                            cena+=pantaloni[i].getCena();
                            }
                         for (int i = 0; i < k; i++)
                            {
                                kosuli[i].prikazi_podatociK();
                                cena+=kosuli[i].getCena();
                            }
                        cout<<"Vkupna cena: "<<cena<<endl;
                        
                    break;
                case 'd'://ne mi e jasno so kosulite sto ima da se racuva vo nabavka koga nabavkata se pravi po potreba
                        cout<<"d) Prikazuvanje na artikli za koi treba nabavka "<<endl;
                        for (int i = 0; i < k; i++)
                        {
                            if (pantaloni[i].getDenoviDoNabavka() < 8)
                            {
                                pantaloni[i].prikazi_podatociP();
                            }
                            
                        }
                
                    break;    

                
                default:
                    break;
            }
            opcija=opcii();
        return 0;
    }
}
char opcii()
{
    char choise;
    cout<<"Izberi bukva: "<<endl;
    cout<<"a) Dodavanje na artikl vo listata "<<endl;
    cout<<"b) Prikazuvanje na artikli od dadena grupa "<<endl;
    cout<<"c) Prikazuvanje na cela lista so vkupna cena "<<endl;
    cout<<"d) Prikazuvanje na artikli za koi treba nabavka "<<endl;
    cout<<"e) Izlez "<<endl;

    cin >> choise;
    return choise;
}