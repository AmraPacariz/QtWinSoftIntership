#include <iostream>
#include <string>
using namespace std;
template<typename T>
class Pole {
private:
    T* pole;
    int dolzina;
public:
    Pole(T* p, int n)  {pole=p;dolzina=n; for (int i = 0; i < n; ++i) {  pole[i] = p[i]; }}
    ~Pole() { delete[] pole;}
    T operator[](int i) {if (i < 0 || i >= dolzina) { throw std::out_of_range("Indeksot e nadvor od granicite na poleto");  } return pole[i];}
    int getDolzina() const { return dolzina;}
};

template<typename T>
T max( Pole<T>& pole) {
    T maks = pole[0];
    for (int i = 1; i < pole.getDolzina(); ++i) {
        if (pole[i] > maks) {
            maks = pole[i];
        }
    }
    return maks;
}

int main() {
    int p1[5] = { 1, 2, 5, 4, 3 };
    Pole<int> pole1(p1, 5);
    cout << "Najgolem element vo pole1: " << max(pole1) << endl;

    char p2[5] = { 'a', 'z', 'd', 'e', 'p' };
    Pole<char> pole2(p2, 5);
    cout << "Najgolem element vo pole2: " << max(pole2) << endl;

    string p3[5] = { "abc", "def", "zxy", "pqr", "lmn" };
    Pole<string> pole3(p3, 5);
    cout << "Najgolem element vo pole3: " << max(pole3) << endl;

    return 0;
}
