
#include <iostream>
#include "dropki.h"
using namespace std;




Dropki::Dropki(int broitel, int imenitel)
{
    
     setirajVrednosti(broitel, imenitel);

}

void Dropki::setirajVrednosti(int broitel, int imenitel)
{
    broj1 = broitel;
    broj2= (imenitel == 0) ? 1 : imenitel;
}

int Dropki::zemiBroitel()
{
    return broj1;
}

int Dropki::zemiImenitel()
{
    return broj2;
}
int gcd(int a, int b) {  
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
void reduciranaForma(int broitel,int imenitel)
{
    int gcdValue = gcd(broitel, imenitel);   // Пресметување на GCD
    broitel /= gcdValue;   // Редуцирање на броителот
    imenitel /= gcdValue;
    cout<<broitel<<"/"<<imenitel<<endl;

   
}
void Dropki::sobiranje(Dropki dropka2)
{
    int broitel,imenitel;
    broitel=broj1*dropka2.zemiImenitel()+dropka2.zemiBroitel()*broj2;
    imenitel=broj2*dropka2.zemiImenitel();
    cout<<broj1<<"/"<<broj2<<"+"<<dropka2.zemiBroitel()<<"/"<<dropka2.zemiImenitel()<<"=";
    reduciranaForma(broitel,imenitel);
}
void Dropki::odzemanje(Dropki dropka2)
{
    int broitel,imenitel;
    broitel=broj1*dropka2.zemiImenitel()-dropka2.zemiBroitel()*broj2;
    imenitel=broj2*dropka2.zemiImenitel();
    cout<<broj1<<"/"<<broj2<<"-"<<dropka2.zemiBroitel()<<"/"<<dropka2.zemiImenitel()<<"=";
    reduciranaForma(broitel,imenitel);
}
void Dropki::mnozenje(Dropki dropka2)
{
    int broitel,imenitel;
    broitel=broj1*dropka2.zemiBroitel();
    imenitel=broj2*dropka2.zemiImenitel();
    cout<<broj1<<"/"<<broj2<<"*"<<dropka2.zemiBroitel()<<"/"<<dropka2.zemiImenitel()<<"=";
    reduciranaForma(broitel,imenitel);
}
void Dropki::delenje(Dropki dropka2)
{
    int broitel,imenitel;
    if(dropka2.zemiBroitel()!=0){
        broitel=broj1*dropka2.zemiImenitel();
        imenitel=broj2*dropka2.zemiBroitel();
        cout<<broj1<<"/"<<broj2<<":"<<dropka2.zemiBroitel()<<"/"<<dropka2.zemiImenitel()<<"=";
        reduciranaForma(broitel,imenitel);}
    else
    {   
        cout<<"nemoze da imame delenje poradi toa sto ne se deli so nula ";
        dropka2.realenBroj();
    }

}
void Dropki::obicnaForma()
{
   
    cout<<broj1<<"/"<<broj2<<endl;
  

}
void Dropki::realenBroj()
{
    float rezultat=(float)broj1/broj2;
    cout<<broj1<<"/"<<broj2<<"="<<rezultat<<endl;
  

}
