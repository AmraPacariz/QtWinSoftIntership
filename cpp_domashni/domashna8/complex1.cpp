#include <iostream>

using std::cout;

#include "complex1.h"

// Konstruktor
Complex::Complex( double r, double i ) 
   : real( r ), imaginary( i ) { }

// Preklopi operator za sobiranje
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real, 
                   imaginary + operand2.imaginary );
} // kraj na funkcijata operator+ 

// Preklopi operator za odzemanje
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real, 
                   imaginary - operand2.imaginary );
} // kraj na funkcijata operator- 

// Preklopi operator = 
const Complex& Complex::operator=( const Complex &right )
{
   real = right.real;
   imaginary = right.imaginary;
   return *this;   // ovozmozhuva kaskadiranje
} // ekraj na funkcijata operator= 


Complex Complex::operator+=(const Complex &operand2)
{
    return *this = *this + operand2;
}

Complex Complex::operator-=(const Complex &operand2)
{
   return *this = *this - operand2;
}

Complex Complex::operator*=(const Complex &operand2)
{
   return *this = *this * operand2;

}
Complex Complex::operator*(const Complex& c) const {
        double r = real * c.real - imaginary * c.imaginary;
        double i = real * c.imaginary + imaginary * c.real;
        return Complex(r, i);
    }
Complex Complex::operator*(int num) const {
        double r = real * num;
        double i = imaginary * num;
        return Complex(r, i);
    }
 ostream& operator<<(ostream& os, const Complex& c) {
        os << "(" << c.real << ", " << c.imaginary << "i)";
        return os;
    }

istream& operator>>(istream& is, Complex& c) {
        cout << "Vnesi realen del: ";
        is >> c.real;
        cout << "Vnesi imaginaren del: ";
        is >> c.imaginary;
        return is;
    }
bool operator==(Complex operand1, Complex operand2)
{
    if(operand1.real == operand2.real && 
      operand1.imaginary == operand2.imaginary)
      return true;
    else return false;
}

bool operator!=(Complex operand1, Complex operand2)
{
    if(operand1.real != operand2.real || 
      operand1.imaginary != operand2.imaginary)
      return true;
    else return false;
} 
