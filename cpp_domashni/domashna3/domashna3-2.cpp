/*. Да се направи програма која ќе ја користи класата Штедач и ќе овозможи: 
a)	Внесување на нов штедач во системот
b)	Приказ на податоците
c)	Уплата на средства
d)	Исплата на средства (со контрола дали е можна таква исплата)
e)	Приказ на салдото за даден штедач
*/
#include <iostream>
using namespace std;

class Stedac
{
 public:
        void vnesi_podatoci();
        void prikazi_podatoci();
        void uplata(unsigned long i);
        void isplata(unsigned long i);
        long sostojba();
 private:
        int broj;
        char imeprezime[30], adresa[50];
        long saldo;
}; 
 void Stedac::vnesi_podatoci()
{   
    cout << "Vnesi ime i prezime : "; cin >> imeprezime;
    cout << "Vnesi adresa: "; cin >> adresa;
    cout << "Vnesi saldo: "; cin >> saldo;
    cout << endl;
}
  void Stedac::prikazi_podatoci()
{
    cout << "Ime i prezime : "  << imeprezime << endl;
    cout << "Adresa: " <<adresa << endl;
    cout << "Saldo: " << saldo << endl;
    cout << endl;
}
  void Stedac::uplata(unsigned long i)
{
   saldo+=i;
   cout << "Napravena e uplata od: " << i << endl;
   cout << endl;
}
  void Stedac::isplata(unsigned long i)
{
   saldo+=i;
   cout << "Napravena e isplata od: " << i << endl;
   cout << endl;
}
  long Stedac::sostojba()
{
   return saldo;
}
char opcii();

int main(){
 Stedac stedaci[100];
 int brojStedac;
 int brojac=0;
 long suma;
 char opcija=opcii();
   
    while ( opcija != 'f')
    {  
       
        switch (opcija)
        {
        case 'a':
            cout<<"Vnesuvanje na nov shtedac vo sistemot"<<endl;
            brojac++;
            stedaci[brojac-1].vnesi_podatoci();
            cout<<"Vnesen stedac ["<<brojac<<"]"<<endl;
            cout<<endl;
            break;
        case 'b'://mozam i preku ime da prebaruvam ali polesno mi e vakaa kodot ood minatata zadaca da go koristam
            cout<<"Prikaz na podatoci"<<endl;
            cout<<"Vnesete go  brojot na stedachot za sakate da gi pecatite informacii:"<<endl;
            cin>>brojStedac;
            if (brojStedac-1<brojac)
            
                stedaci[brojStedac-1].prikazi_podatoci();
                
            else
                cout<<"Nema stedac so takov broj "<<brojStedac<<endl;
             
            cout<<endl;    
             break;
        case 'c':
            cout<<"Uplata na sredstva"<<endl;
            cout<<"Vnesete go vashiot stedachki broj za da napravite uplata na sredstva:"<<endl;
            cin>>brojStedac;
            if (brojStedac-1<brojac){
                cout<<"Vnesete kolkava suma sakate da upaltite:"<<endl;
                cin>>suma;
                stedaci[brojStedac-1].uplata(suma);
            }
            else
                 cout<<"Nema stedac so takov broj "<<brojStedac<<endl;
                 cout<<endl;
            break;
        case 'd':
            cout<<"Isplata na sredstva"<<endl;
            cout<<"Vnesete go vashiot stedachki broj za da napravite isplata na sredstva:"<<endl;
            cin>>brojStedac;
            if (brojStedac-1<brojac){
                cout<<"Vnesete kolkava suma sakate da ispoaltite:"<<endl;
                cin>>suma;
                if(stedaci[brojStedac-1].sostojba() > suma)
                    stedaci[brojStedac-1].isplata(suma);
                else
                    cout<<"Sumata za isplata e pogolema od salldoto na smetkata"<<endl;
                    break;       
            }
            else
                 cout<<"Nema stedac so takov broj "<<brojStedac<<endl;
                 cout<<endl;
            break;
        case 'e':
                cout<<"Prikaz na sredstva"<<endl;
                cout<<"Vnesete go  brojot na stedach:"<<endl;
                cin>>brojStedac;
                if (brojStedac-1<brojac)
                
                    cout<<"Sredstva:"<<stedaci[brojStedac-1].sostojba()<<endl;
                    
                else
                    cout<<"Nema stedac so takov broj "<<brojStedac<<endl;
                
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
    cout<<"a)Vnesuvanje na nov shtedac vo sistemot"<<endl;
    cout<<"b)Prikaz na podatoci"<<endl;
    cout<<"c)Uplata na sredstva"<<endl;
    cout<<"d)Isplata na sredstva"<<endl;
    cout<<"e)Prikaz na sredstva"<<endl;
    cout<<"f)Kraj"<<endl;
    cout<<endl;
    cin>>opcija;
    cout<<endl;
    return opcija;
}