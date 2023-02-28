/*. Да се открие и опише што работи следниот програм?*/

#include <stdio.h>
 
int misterija( unsigned bitovi ); 
 
int main()
{ 
   unsigned x; 
   printf( "Vnesi cel broj: " );
   scanf( "%u", &x );
   printf( "Rezultatot e %d\n", misterija( x ) );
   return 0; 
} 
 
int misterija( unsigned bitovi )
{ 
   unsigned i;              
   unsigned maska = 1 << 31; //se pravi maska
   unsigned total = 0; //total se stava na 0 i kje go koristime kako beojac     
 
   for ( i = 1; i <= 32; i++, bitovi <<= 1 ) {
      if ( ( bitovi & maska ) == maska ) { //ideme bit po bit i pravime and bitska operacija pomegju bitovite i maskata i ako rezultatot e ist ko maskata go zgolemuvame brojacot
         total++;
      } 
   } 
   return !( total % 2 ) ? 1 : 0;//ako total(brojor na edinici) e paren funkcijata  kje vrati 1 ako e neparen kje vrati 0
} 
