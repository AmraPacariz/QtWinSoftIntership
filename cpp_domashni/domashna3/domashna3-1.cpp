/*Да се формира класа Квадар (скриени елементи: должина, ширина и висина; јавни функции: плоштина, волумен). Од неа да се имплементира поле 
од објекти. Да се најде оној кој има најмала плоштина, а не е коцка. Да се креира мени:
a)	Креирај нов објект
b)	Постави ги димензиите
c)	Печати ги димензиите на сите објекти
d)	Печати ги димензиите за поедин објект
e)	Печати ги оние кои го задоволуваат условот
*/
#include <iostream>
using namespace std;
class Kvadar {
public:
void vnesiVrednosti();
void pecatiVrednosti();
int ploshtina();
int volumen();
int daliKocka();
private:
int dolzina,sirina,visina;

};
void Kvadar:: vnesiVrednosti()
{
    cout << "Vnesi dolzina na kvadarot: "; cin >> dolzina;
    cout << "Vnesi shirina na kvadarot: "; cin >> sirina;
    cout << "Vnesi visina na kvadarot: "; cin >> visina;

}
void Kvadar:: pecatiVrednosti()
{
    cout << "Dolzina na kvadarot: "  << dolzina << endl;
    cout << "Sirina na kvadarot: " << sirina << endl;
    cout << "Visina na kvadarot: " << visina << endl;

}

int Kvadar::ploshtina()
{
    return 2 * (dolzina * sirina + dolzina * visina + sirina * visina);
}

int Kvadar::volumen()
{
    return dolzina * sirina * visina;
}

int Kvadar::daliKocka()
{
    if(dolzina==sirina && dolzina==visina)
        return 1;
    else
        return 0;
}


char opcii();
int najmalaPloshtina(Kvadar obijekti[10],int brojac);

int main()
{
    Kvadar obijekti[10];
    int brojac=0,brojKvadar;
    char opcija=opcii();
   
    while ( opcija != 'f')
    {  
       
        switch (opcija)
        {
        case 'a':
            cout<<"a)Kreiraj nov obijekt"<<endl;
            brojac++;
            cout<<"Kreiran kvadar ["<<brojac<<"]"<<endl;
            cout<<endl;
            break;
        case 'b':
            cout<<"b)Postavi gi dimenziite"<<endl;
            cout<<"Vnesete go redeniot broj na kvadarot za sakate da gi stavite dimenziite:"<<endl;
            cin>>brojKvadar;
            if (brojKvadar-1<brojac)
            
                obijekti[brojKvadar-1].vnesiVrednosti();
                
            else
            cout<<"Nema kvadar so broj "<<brojKvadar<<endl;
            cout<<endl;
            break;
        case 'c':
            cout<<"c)Pecati gi dimenziite na site obijekti"<<endl;
            for (int i = 0; i < brojac; i++)
            {
                cout<<"Kvadar ["<<i+1<<"]"<<endl;
                obijekti[i].pecatiVrednosti();
                cout<<endl;
            }
            cout<<endl;
            break;
        case 'd':
           
            cout<<"d)Pecati gi dimenziite na poedini obijekti"<<endl;
            cout<<"Vnesete go redeniot broj na kvadarot za sakate da gi pecatite dimenziite:"<<endl;
            cin>>brojKvadar;
            if (brojKvadar-1<brojac)
            
                obijekti[brojKvadar-1].pecatiVrednosti();
                
            else
                cout<<"Nema kvadar so broj "<<brojKvadar<<endl;
             
            cout<<endl;    
            break;
        case 'e':
            cout<<"e)Pecati gi onie koi go zadovoluvaat uslovot"<<endl;
            cout<<"Kvadrati koi ne se kociki"<<endl;
            for (int i = 0; i < brojac; i++)
            {
                if(!(obijekti[i].daliKocka()))
                cout<<"Kvadar ["<<i+1<<"]"<<endl;

            }
            cout<<endl;
            break;            
        default:
            cout<<"Nema takva opcija"<<endl;
             cout<<endl;
            break;
        }
        opcija=opcii(); 
    }
  int redenBroj=najmalaPloshtina(obijekti,brojac);
  cout<<"Najmala ploshtina sto go zadovoluva uslovot ima kvadarot ["<<redenBroj+1<<"]"<<endl;
  obijekti[redenBroj].pecatiVrednosti();
  return 0;
}

char opcii()
{   char opcija;
    cout<<"a)Kreiraj nov obijekt"<<endl;
    cout<<"b)Postavi gi dimenziite"<<endl;
    cout<<"c)Pecati gi dimenziite na site obijekti"<<endl;
    cout<<"d)Pecati gi dimenziite na poedini obijekti"<<endl;
    cout<<"e)Pecati gi onie koi go zadovoluvaat uslovot"<<endl;
    cout<<"f)Kraj"<<endl;
    cout<<endl;
    cin>>opcija;
    cout<<endl;
    return opcija;
}
int najmalaPloshtina(Kvadar objekti[10],int brojac)
{
 Kvadar najmal;
 int redenBroj;
  for (int i = 0; i < brojac; i++)
 {
    if(!(objekti[i].daliKocka()))//prviot shto ne e kocka napravi go da bide najmal
    {
      najmal=objekti[i];
      redenBroj=i;
      break;
    }
 }
 for (int i = 1; i < brojac; i++)
 {
    if(najmal.ploshtina() > objekti[i].ploshtina() && !(objekti[i].daliKocka()))
       najmal=objekti[i];
       redenBroj=i;
 }
 return redenBroj;
 
}


