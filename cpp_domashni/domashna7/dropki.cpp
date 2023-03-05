
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
Dropki reduciranaForma(Dropki d)
{
    int broitel=d.zemiBroitel();
    int imenitel=d.zemiImenitel();
    int gcdValue = gcd(broitel,imenitel);   // Пресметување на GCD
    broitel /= gcdValue;   // Редуцирање на броителот
    imenitel /= gcdValue;
  
    Dropki temp(broitel,imenitel);
    return temp;
   
}
Dropki  Dropki::operator+(Dropki dropka2)
{
    int broitel,imenitel;
    broitel=broj1*dropka2.zemiImenitel()+dropka2.zemiBroitel()*broj2;
    imenitel=broj2*dropka2.zemiImenitel();
  
    Dropki temp(broitel,imenitel);
    reduciranaForma(temp);
    return reduciranaForma(temp);
}
Dropki  Dropki::operator-(Dropki dropka2)
{
    int broitel,imenitel;
    broitel=broj1*dropka2.zemiImenitel()-dropka2.zemiBroitel()*broj2;
    imenitel=broj2*dropka2.zemiImenitel();
    Dropki temp(broitel,imenitel);
    reduciranaForma(temp);
    return reduciranaForma(temp);
    
}
Dropki  Dropki::operator*(Dropki dropka2)
{
    int broitel,imenitel;
    broitel=broj1*dropka2.zemiBroitel();
    imenitel=broj2*dropka2.zemiImenitel();
     Dropki temp(broitel,imenitel);
    reduciranaForma(temp);
    return reduciranaForma(temp);
}
Dropki  Dropki::operator/(Dropki dropka2)
{
    int broitel,imenitel;
    if(dropka2.zemiBroitel()!=0){
        broitel=broj1*dropka2.zemiImenitel();
        imenitel=broj2*dropka2.zemiBroitel();
         Dropki temp(broitel,imenitel);
        reduciranaForma(temp);
        return reduciranaForma(temp);
    }
    else
    {   
        cout<<"nemoze da imame delenje poradi toa sto ne se deli so nula ";
        dropka2.realenBroj();
        Dropki temp1(0,1);
        return temp1;
    }

}
Dropki  Dropki::operator+(int broj){
        int broitel,imenitel;
        broitel=broj1+broj*broj2;
        imenitel=broj2;
        Dropki temp(broitel,imenitel);
        reduciranaForma(temp);
        return reduciranaForma(temp);
  }
Dropki Dropki:: operator-(int broj)
{
        int broitel,imenitel;
        broitel=broj1-broj*broj2;
        imenitel=broj2;
        Dropki temp(broitel,imenitel);
        reduciranaForma(temp);
        return reduciranaForma(temp);
}
Dropki  Dropki::operator*(int broj)//***broj1/1 taka ja go gledam celiot broj
{
        int broitel,imenitel;
        broitel=broj1*broj;
        imenitel=broj2;
        Dropki temp(broitel,imenitel);
        reduciranaForma(temp);
        return reduciranaForma(temp);
}
Dropki Dropki::operator/(int broj)//  
{
    int broitel,imenitel;
    if(broj!=0){
        broitel=broj1;
        imenitel=broj2*broj;
        Dropki temp(broitel,imenitel);
        reduciranaForma(temp);
        return reduciranaForma(temp);
    }
    else
    {   
        cout<<"nemoze da imame delenje poradi toa sto ne se deli so nula ";

        Dropki temp1(0,1);
        return temp1;
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
