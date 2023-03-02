#include <iostream>

using namespace std;

template <typename T>
T mymin(T x, T y) {
    return (x < y) ? x : y;
}

int main() {
    int a = 5, b = 10;
    cout << "Pomaliot od " << a << " i " << b << " e: " << mymin(a, b) << endl;

    double c = 3.14, d = 2.71;
    cout << "Pomaliot od " << c << " i " << d << " e: " << mymin(c, d) << endl;

    char e = 'a', f = 'A';
    cout << "Pomaliot od " << e << " i " << f << " e: " << mymin(e, f) << endl;

    return 0;
}
