#ifndef DROPKI_H
#define DROPKI_H
class Dropki {
public:
  Dropki (int=0,int=1);
  void setirajVrednosti(int broitel, int imenitel);
  int zemiBroitel();
  int zemiImenitel();
  Dropki  operator+(Dropki dropka2);
  Dropki  operator-(Dropki dropka2);
  Dropki  operator*(Dropki dropka2);
  Dropki  operator/(Dropki dropka2);
  Dropki  operator+(int);
  Dropki operator-(int);
  Dropki  operator*(int);
  Dropki  operator/(int);
  void obicnaForma();
  void realenBroj();
private:
   int broj1,broj2;
}; 
#endif

