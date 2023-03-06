#ifndef COMPLEX1_H
#define COMPLEX1_H
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

#include <iomanip>


class Complex {
public:
   Complex( double = 0.0, double = 0.0 ); 
  
   Complex operator+( const Complex & ) const;  // sobiranje
   Complex operator-( const Complex & ) const;  // odzemanje
   Complex operator*( const Complex & ) const;  // mnozenje na kompleksen so kompleksen
   Complex operator*(const int) const; //mnozenje na kompleksen so int
   const Complex &operator=( const Complex & ); // dodeluvanje
   friend ostream &operator<<( ostream&, const Complex & );
   friend istream &operator>>( istream&, Complex & );
   friend bool operator==(Complex, Complex);
   friend bool operator!=(Complex, Complex);
    Complex operator+=(const Complex &);
   Complex operator-=(const Complex &);
   Complex operator*=(const Complex &);
                       
private:
   double real;       // realen del
   double imaginary;  // imaginaren del
}; // kraj na klasta Complex

#endif
