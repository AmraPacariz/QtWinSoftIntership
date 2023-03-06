#ifndef MATRICA_H
#define MATRICA_H
 
#include <iostream>
 
using namespace std;
 
class Matrica {
    public:
    Matrica( int=2,int=2 );                   
    Matrica( const Matrica & );             
    ~Matrica();                                       
    const Matrica &operator=( const Matrica & ); 
    bool operator==( const Matrica & ) const; 
    bool operator!=( const Matrica &right ) const  { return ! ( *this == right ); }
    int &operator[]( int );              
    const int &operator[]( int ) const; 
    static int getbrMatrici();  
    const int &operator[](int) const;
    Matrica operator+(const Matrica &) const; 
    Matrica operator-(const Matrica &) const; 
    Matrica operator*(const Matrica &) const;
    Matrica operator*(const int) const; 

    friend Matrica operator*(int, Matrica);
    friend ostream &operator<<( ostream &, const Matrica & );
    friend istream &operator>>( istream &, Matrica & );
                                    
private:
   int redici,koloni;
   int *mat; 
   static int brMatrici; 
}; 
 
#endif
