/*Напиши програм кој чита датум во обликот 14/06/2005 и враќа датум во обликот 14 juni 2005. 
Корисникот да има можност да внесува колку што сака датуми кои треба да бидат конвертирани во другиот излез.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char datum[20];
    char *den;
    char *mesec;
    char *godina;
    
    printf("Vnesi  datum od oblik 14/06/2005 vnesi KRAJ za da prekines \n ");
   while (1)
   {
    
   
    printf("\n Vnesi  datum : ");
    gets(datum);
    
    if (strcmp(datum, "KRAJ") == 0)
         {
            printf("Izlez od programata.\n");
            break;
        }
     
     den=strtok(datum,"/");
     int intDen=atoi(den);
     mesec=strtok(NULL,"/");
     int intMesec=atoi(mesec);
     godina=strtok(NULL,"/");
     int intGodina=atoi(godina);
     switch (intMesec)
     {
     case 1:
        mesec="januari";
        break;
     case 2:
        mesec="februari";
        break;
     case 3:
        mesec="mart";
        break;
     case 4:
        mesec="april";
        break;
     case 5:
        mesec="maj";
        break;
     case 6:
        mesec="juni";
        break;
     case 7:
        mesec="juli";
        break;
     case 8:
        mesec="avgust";
        break;
     case 9:
        mesec="septemvri";
        break;
     case 10:
        mesec="oktomvri";
        break;
     case 11:
        mesec="noemvri";
        break;
     case 12:
        mesec="dekemvri";
        break;
     
     
     default:
        mesec="nevaliden mesec";
        break;
    
     }
     printf("%d %s %d",intDen,mesec,intGodina);
   }
    return 0;
}