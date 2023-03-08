#include <iostream>
#include <ctime>

using namespace std;

#include "pantaloni.h"

Pantaloni::Pantaloni(){}

Pantaloni::Pantaloni(char *ime, int golemina,int cena, int den, int mesec, int godina):Artikl(ime, golemina, cena,den,mesec,godina)
 {
   
 }

void Pantaloni::prikazi_podatociP()
{
    prikazi_podatociA();
}




Pantaloni Pantaloni::postaviP()
{
    char ime[15];
    int golemina,cena,den,mesec,godina;

    cout <<"Ime na artiklot: " ; 
    cin>>ime;
    cout <<"Golemina: " ;
    cin>>golemina;
    cout <<"Cena: ";
    cin>> cena;
    cout <<"Donesen vo prodavnica: ";
    cin>>den>>mesec>>godina;
    

    return Pantaloni(ime,golemina,cena,den,mesec,godina);
}

int Pantaloni::getDenoviDoNabavka() //ja kje napravam da ni go dade denot mesec dena od koa stignale pantalonite
{
    Date d=getDonesenVoProdavnica();
    int day=d.getDay();
    int month=d.getMonth();
    int year=d.getYear();

    
     if(day>daysInNextMonth(month))
     {
        day=daysInNextMonth(month);
     }
     
      month += 1;
    if (month == 13) {
        month = 1;
        year += 1;
    }

    struct tm date2 = {0};
    date2.tm_year = year - 1900;
    date2.tm_mon = month - 1;
    date2.tm_mday = day;

    time_t time2 = mktime(&date2);//time2 mi e denot koga treba da stignat
     time_t now = time(0);
    const int seconds_per_day = 60 * 60 * 24;
    int difference_in_seconds = difftime(now, time2);
    int days = difference_in_seconds / seconds_per_day;
   return days;

}
int daysInNextMonth(int month)
{   month += 1;
    if (month == 13) {
        month = 1;
       
    }
    int days;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days=31;
        break;
    case 2:
       days=28;
    default:
        days=30;
        break;
    }
    return days;
}