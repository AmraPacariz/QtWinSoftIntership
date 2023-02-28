// Модифицирај го програмот p04_01.c така да ги испуштиш break наредбите. Што се случува? Покажи пример.

#include <stdio.h>
 

int main()
{
   int mesec;             
 
   printf("Vnesi go mesecot so negoviot reden broj: ");
   scanf("%d", &mesec);
 
   switch (mesec) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
                printf("Ima 31 den\n");
                
    case 4:
    case 6:
    case 9:
    case 11:
                printf("Ima 30 dena\n");
               
    case 2:
                printf("Vo prestapni godini ima 29, a vo obichni 28 dena\n");
                
    default:
                printf("Greshen broj na mesec!\n");
   } 
 
   return 0; 
                            
}
//ako gi ispustime break naredbite kje vleze vo site casovi pod izbraniot
/*Vnesi go mesecot so negoviot reden broj: 5
Ima 31 den
Ima 30 dena
Vo prestapni godini ima 29, a vo obichni 28 dena
Greshen broj na mesec!*/


//ako vneseme 4 kje vleze vo site pod 4
/*Vnesi go mesecot so negoviot reden broj: 4
Ima 30 dena
Vo prestapni godini ima 29, a vo obichni 28 dena
Greshen broj na mesec!*/