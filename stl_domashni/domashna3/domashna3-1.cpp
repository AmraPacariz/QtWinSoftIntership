#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Zapis {

public:
    Zapis(T xZ, T yZ, T zZ) {x=xZ;y=yZ;z=zZ;}
    T getX(){return x;}
    T getY(){return y;}
    T getZ(){return z;}
    
private:
    T x, y, z;
};

template<typename T>
void kontrolor(Zapis<T> zapis) {
    if (zapis.getX() + zapis.getY() + zapis.getZ() > 10000) {
       cout << "Zbirot na elementite nadminuva 10000." <<endl;
    } else {
       cout << "Zbirot na elementite ne nadminuva 10000." <<endl;
    }
}
int main() {
    Zapis<int> z1(3000, 4000, 1000);
    kontrolor(z1);

    Zapis<double> z2(2000.5, 3000.75, 5000.25);
    kontrolor(z2);

    return 0;
}