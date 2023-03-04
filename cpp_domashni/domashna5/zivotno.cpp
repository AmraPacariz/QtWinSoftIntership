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
int days_between_dates(std::tm date1, std::tm date2) {
    std::time_t time1 = std::mktime(&date1);
    std::time_t time2 = std::mktime(&date2);

    if (time1 == -1 || time2 == -1) {
        // Error occurred
        return -1;
    }

    const int seconds_per_day = 60 * 60 * 24;

    int difference_in_seconds = std::difftime(time2, time1);
    int difference_in_days = difference_in_seconds / seconds_per_day;

    return difference_in_days;
}
int Zivotno:: presmetajVakcinacija()//vakjam za kolku dena treba da se vakcinira
{
   time_t t = time(nullptr); // земање на моменталното време
   struct tm* now = localtime(&t); // конверзија на секундите во локално време
   
   int dayDenes = now->tm_mday; // денот на моменталниот ден (1-31)
   int monthDenes = now->tm_mon + 1; // месецот на моменталниот ден (0-11, затоа +1)
   int yearDenes = now->tm_year + 1900; // годината на моменталниот ден (годината од 1900)
    
    int dayV=datumNaPoslednaVakcinacija.getDay();
    int monthV=datumNaPoslednaVakcinacija.getMonth();
    int yearV=datumNaPoslednaVakcinacija.getYear();
    tm date1 = {0, 0, 0, dayV, monthV, yearV}; // 1st February, 2022
    tm date2 = {0, 0, 0, dayDenes,monthDenes, yearDenes}; // 1st March, 2022
     int days = days_between_dates(date1, date2);
    if(tip='c' )
    {
        return abs(days-365);
    }
    else if (tip='p'){
        return abs(days-183);
    }
    else if (tip='v'){
        return abs(days-244);
    }
    return 0;
}
