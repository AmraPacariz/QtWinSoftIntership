#ifndef DROPKI_H
#define DROPKI_H
class Dropki {
public:
  Dropki (int=0,int=1);
  void setirajVrednosti(int broitel, int imenitel);
  int zemiBroitel();
  int zemiImenitel();
  void sobiranje(Dropki dropka2);
  void odzemanje(Dropki dropka2);
  void mnozenje(Dropki dropka2);
  void delenje(Dropki dropka2);
  void obicnaForma();
  void realenBroj();
private:
   int broj1,broj2;
}; 
#endif

