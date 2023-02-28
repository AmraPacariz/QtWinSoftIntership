/*Во програмот p05_02.c смести ја иницијализацијата на променливата sum во заглавието на наредбата for*/
#include <stdio.h>
 

int main()
{
    int sum;
   int number; 
 
   for (sum=0, number = 2 ; number <= 100; number += 2 ) {
      sum += number;     
   } 
 
   printf( "Sumata e %d\n", sum ); 
 
   return 0; 
    
} 
