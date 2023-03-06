#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cassert>
 
using namespace std;

#include "Matrica.h"
int Matrica::brMatrici = 0;   
 
Matrica::Matrica(int matRedici, int matKoloni)
{
    redici = (matRedici > 0 ? matRedici : 2);
    koloni = (matKoloni > 0 ? matKoloni : 2);
    mat = new int[redici * koloni];
    assert(mat != 0); 
 
   for (int i = 0; i < redici; ++i)
   {
        for(int j = 0; j < koloni; ++j)
        {
            mat[i * koloni + j] = 0;

        }
   }
   ++brMatrici;
}
 


Matrica::Matrica(const Matrica &matrix) 
    : redici(matrix.redici), koloni(matrix.koloni)
{
   mat = new int[redici * koloni];
   assert(mat != 0);     
 
   for (int i = 0; i < matrix.redici; ++i)
   {
        for(int j = 0; j < matrix.koloni; ++j)
        {
            mat[i * koloni + j] = matrix.mat[i * koloni + j];
        }
   }  
    ++brMatrici;  
} 



Matrica::~Matrica()
{   --brMatrici;
   delete [] mat;           
} 

 

const Matrica &Matrica::operator=(const Matrica &right)
{
   if (&right != this) {  
      
      if (redici != right.redici || koloni != right.koloni) 
      {
         delete [] mat;
         redici = right.redici;
         koloni = right.koloni;        
         mat = new int[redici * koloni];
         assert( mat != 0 ); 
      }
 
      for (int i = 0; i < redici; ++i)
      {
            for(int j = 0; j < koloni; ++j)
            {
                mat[i * koloni + j] = right.mat[i * koloni + j];
            }
      }    
   } 
 
   return *this;   
}


 int Matrica::getbrMatrici() { return brMatrici; }



bool Matrica::operator==(const Matrica &right) const
{
   if (redici != right.redici || koloni != right.koloni)
      return false; 

   for (int i = 0; i < redici; ++i)
   {
        for(int j = 0; j < koloni; ++j)
        {
            if(mat[i * koloni + j] != 
            right.mat[i * koloni + j])
             return false;
        }
   }
 
   return true;    
}



bool Matrica::operator!=(const Matrica &right) const
{
   if (redici != right.redici || koloni != right.koloni)
      return true; 
 
   for (int i = 0; i < redici; ++i)
   {
        for(int j = 0; j < koloni; ++j)
        {
            if(mat[i * koloni + j] != 
            right.mat[i * koloni + j])
             return true;
        }
   }
 
   return false;    
}
 



int &Matrica::operator[](int subscript)
{
   assert(0 <= subscript && subscript < redici * koloni);
   return mat[subscript]; 
} 
Matrica Matrica::operator+(const Matrica &matrix) const
{
    Matrica temp(*this);
    if(redici != matrix.redici || koloni != matrix.koloni)
    {
        cout << "Ne mozat da se sobiraat\n";
             return temp;
    }
    else
    {
        temp.redici = redici;
        temp.koloni = koloni;
        for (int i = 0; i < redici; ++i)
        {
            for(int j = 0; j < koloni; ++j)
            {
                temp[i * koloni + j] =  mat[i * koloni + j] + 
                                    matrix.mat[i * matrix.koloni + j];
            }
        }  
    }
    return temp;
}



Matrica Matrica::operator-(const Matrica &matrix) const
{
    Matrica temp(*this);
    if(redici != matrix.redici || koloni != matrix.koloni)
    {
        cout << "Ne mozat da se odzemaat \n";
             return temp;
    }
    else
    {
        temp.redici = redici;
        temp.koloni = koloni;
        for (int i = 0; i < redici; ++i)
        {
            for(int j = 0; j < koloni; ++j)
            {
                temp[i * koloni + j] =  mat[i * koloni + j] - 
                                    matrix.mat[i * matrix.koloni + j];
            }
        }  
    }
    return temp;
} 



const int &Matrica::operator[](int subscript) const
{
   assert(0 <= subscript && subscript < redici * koloni);
   return mat[subscript]; 
}



Matrica Matrica::operator*(const Matrica &matrix) const
{
    if(koloni != matrix.redici)
    {

             return *this;
    }
    else
    {
        Matrica temp(redici, matrix.koloni);
        for (int i = 0; i < redici; ++i)
        {
            for(int j = 0; j < matrix.koloni; ++j)
            {
                for(int k = 0; k < koloni; ++k)
                {
                     temp[i * matrix.koloni + j] +=  mat[i * koloni + k] * 
                                    matrix.mat[k * matrix.koloni + j];
                }
            }
        }
        return temp;  
    }
}


Matrica Matrica::operator*(const int number) const
{
    Matrica temp(redici, koloni);
    for(int i = 0; i < redici; ++i)
    {
        for(int j = 0; j < koloni; ++j)
        {
            temp[i * koloni + j] =  mat[i * koloni + j] * number;
        }
    }
    return temp;
}

 
istream &operator>>(istream &input, Matrica &matrix)
{
   for (int i = 0; i < matrix.redici; ++i)
   {
        for(int j = 0; j < matrix.koloni; ++j)
        {
            input >> matrix.mat[i * matrix.koloni + j];
        }
   }
   return input; 
}
 

 
ostream &operator<<(ostream &output, const Matrica &matrix)
{
   for (int i = 0; i < matrix.redici; ++i)
   {
        for(int j = 0; j < matrix.koloni; ++j)
        {
            output << setw(5) << matrix.mat[i * matrix.koloni + j];
        }
        output << endl;
   }
 
   return output;   
}


Matrica operator*(int number, Matrica matrix)
{
    Matrica temp(matrix.redici, matrix.koloni);
    for(int i = 0; i < matrix.redici; ++i)
    {
        for(int j = 0; j < matrix.koloni; ++j)
        {
            temp[i * matrix.koloni + j] =  
                matrix.mat[i * matrix.koloni + j] * number;
        }
    }
    return temp; 
}