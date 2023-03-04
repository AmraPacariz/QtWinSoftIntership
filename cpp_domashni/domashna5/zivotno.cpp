#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
#include "zivotno.h"
#include "date.h"
Zivotno::Zivotno() : datumNaRaganje(),
                     datumNaDonesuvanjeVoZoo(),
                     datumNaPoslednaVakcinacija() {}

Zivotno::Zivotno(char *Kime, char Ktip, char Kpol, 
        int rden,int rmesec, int rgodina,
        int dden,int dmesec,int dgodina,
        int vden,int vmesec,int vgodina)
        : datumNaRaganje(rmesec,rden,rgodina),
          datumNaDonesuvanjeVoZoo(dmesec,dden,dgodina),
          datumNaPoslednaVakcinacija(vmesec,vden,vgodina)
{
        int length = strlen( Kime);
        length = ( length < 25 ? length : 24 );
        strncpy( ime, Kime, length );
        ime[ length ] = '\0';
        tip=Ktip;
        if (tip != 'c' && tip != 'v' && tip != 'p' ){ tip = 'c';}
        pol=Kpol;
        if (pol != 'z' && pol != 'm'){ pol = 'z';}
}
void Zivotno:: prikaziPodatoci() const
{
    cout<<"Tip na zivotno: "<<tip<<endl;
    cout<<"Ime: "<<ime<<endl;
    cout<<"Pol: "<<pol<<endl;
    cout<<"Datum na ragjanje: ";datumNaRaganje.print();cout<<endl;
    cout<<"Data na doneduvanje vo Zoo: "; datumNaDonesuvanjeVoZoo.print();cout<<endl;
    cout<<"Data na posledna vakcinacija: "; datumNaPoslednaVakcinacija.print();cout<<endl;
    

}
int days_between_dates(tm date1, tm date2) {
    time_t time1 = mktime(&date1);
    time_t time2 = mktime(&date2);

    if (time1 == -1 || time2 == -1) {
        // Error occurred
        return -1;
    }

    const int seconds_per_day = 60 * 60 * 24;

    int difference_in_seconds = difftime(time2, time1);
    int difference_in_days = difference_in_seconds / seconds_per_day;

    return difference_in_days;
}
int Zivotno:: presmetajVakcinacija()//vakjam za kolku dena treba da se vakcinira
{
   time_t now = time(0);
   


     struct tm posledna_vakcinacija;

    posledna_vakcinacija.tm_year = datumNaPoslednaVakcinacija.getYear()-1900;
    posledna_vakcinacija.tm_mon = datumNaPoslednaVakcinacija.getMonth()-1;
    posledna_vakcinacija.tm_mday = datumNaPoslednaVakcinacija.getDay();
    posledna_vakcinacija.tm_hour = 0;
    posledna_vakcinacija.tm_min = 0;
    posledna_vakcinacija.tm_sec = 0;
     time_t posledna_vakcinacija_2 = mktime(&posledna_vakcinacija);

    const int seconds_per_day = 60 * 60 * 24;
    int difference_in_seconds = difftime(now, posledna_vakcinacija_2);
    int days = difference_in_seconds / seconds_per_day;

    if( tip =='c' )
    {
        return 365-days;
    }
    else if ( tip =='p'){
        return 183-days;
    }
    else if ( tip == 'v'){
        return 244-days;
    }
    return 0;
}
