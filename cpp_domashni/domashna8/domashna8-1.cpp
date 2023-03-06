// p08_06.cpp
// Drajver za klasata Complex
#include <iostream>

using std::cout;
using std::endl;

#include "complex1.h"

int main()
{
     Complex c1, c2;
    cout << "Vnesi kompleksen broj 1:\n";
    cin >> c1;

    cout << "Vnesi kompleksen broj 2:\n";
    cin >> c2;

    Complex suma = c1 + c2;
    cout << "Suma = " << suma << endl;

    Complex razlika = c1 - c2;
    cout << "Razlika = " << razlika << endl;

    Complex proizvod = c1 * c2;
    cout << "Proizvod = " << proizvod << endl;

    if (c1 == c2) {
        cout << "Kompleksnite broevi se ednakvi " << endl;
    } else {
        cout << "Kompleksnite broevi se neednakvi " << endl;
    }

    c1 += c2;
    cout << "c1 += c2: " << c1 << endl;

    c1 -= c2;
    cout << "c1 -= c2: " << c1 << endl;

    c1 *= c2;
    cout << "c1 *= c2: " << c1 << endl;
   return 0;
} // kraj main
