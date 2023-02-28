/*Програмот p05_03.c преработи го така да колонската репрезентација на вредностите на депозитот за секоја година биде порамнет одлево.*/
#include <stdio.h>
#include <math.h>  
 

int main()
{
   double amount;             
   double principal = 1000.0; 
   double rate = .05;        
   int year;                
 
   /* Ispechati zaglavie na tabelata */
   printf( "%4s%25s\n", "Godina", "Vrednost na depozitot" );
 
   /* presmetaj ja vrednosta na depozitot za sekoja od desette godini */
   for ( year = 1; year <= 10; year++ ) {
 
      /* presmetaj ja novata vrednost za tekovnata godina */
      amount = principal * pow( 1.0 + rate, year );
 
      /* ispecati nov red vo tabelata */
      printf( "%4d%13.2f\n", year, amount );   
   } /* kraj for */
 
   return 0; /* programot zavrshil uspeshno */
 
} /* kraj na main */
