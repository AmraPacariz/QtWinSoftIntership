#include <iostream>
using namespace std;
template <typename T>
class Array {
private:
    T* niza;
    int dolzina;
public:
    Array(int dolzina) : dolzina(dolzina) {
        niza = new T[dolzina];
    }
    ~Array() {
        delete[] niza;
    }
    T get(int index) const {
        return niza[index];
    }
    void set(int index, T value) {
        niza[index] = value;
    }
};

int main() {
    Array<int> intArray(5);
    intArray.set(0, 10);
    intArray.set(1, 20);
    intArray.set(2, 30);
    intArray.set(3, 40);
    intArray.set(4, 50);

    Array<double> doubleArray(3);
    doubleArray.set(0, 3.14);
    doubleArray.set(1, 2.71);
    doubleArray.set(2, 1.41);

    for (int i = 0; i < 5; i++) {
        cout << intArray.get(i) << " ";
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << doubleArray.get(i) << " ";
    }
    cout << endl;

    return 0;
}
