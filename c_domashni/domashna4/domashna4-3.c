//Модифицирај го претходниот програм (вежба 2) така да просекот се пресметува како децимален број со точност од 3 децимали.

#include <stdio.h>
 
int main()
{
   int ucenici,counter; 
   int grade;   
   int total;  
   float average; 
   
   counter=1;
   total = 0;   
    printf("vnesi broj na ucenici:");
    scanf("%d",&ucenici);
   

   while (counter <= ucenici) {    
      printf( "Vnesi ocena: " ); 
      scanf( "%d", &grade );     
      total = total + grade;   
      counter++;
   }
   
 
   average = (float)total /ucenici; 
 
   printf( "Srednata vrednost na klasot e %.3f\n", average ); 
 
   return 0; 
 
} 