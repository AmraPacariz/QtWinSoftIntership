/*Модифицирај го програмот p04_02.c така да наместо да е предефинирана вредноста на променливата counter,
 треба на корисникот да му се овозможи тој да внесе колку ученици има во класот.*/

#include <stdio.h>
 
int main()
{
   int ucenici,counter; 
   int grade;   
   int total;  
   int average; 
   
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
   
 
   average = total /ucenici; 
 
   printf( "Srednata vrednost na klasot e %d\n", average ); 
 
   return 0; 
 
} 
