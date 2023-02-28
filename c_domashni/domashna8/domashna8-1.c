/*Напиши програм кој вчитува вредности за температури за секој ден од месецот и наоѓа средна месечна температура.
 Да се земе предвид дека различни месеци имаат различен број на денови.*/
#include <stdio.h>

int main() {
   int mesec, denovi_vo_mesec, i;
   float temp, sum = 0, avg;

   printf("Vnesi broj na mesec: ");
   scanf("%d", &mesec);

   switch(mesec) {
      case 2:
         denovi_vo_mesec = 28;
         break;
      case 4:
      case 6:
      case 9:
      case 11:
         denovi_vo_mesec = 30;
         break;
      default:
         denovi_vo_mesec = 31;
         break;
   }


   for (i = 0; i < denovi_vo_mesec; i++) {
      printf("Vnesi ja temepraturata za den  %d: ", i+1);
      scanf("%f", &temp);
      sum += temp;
   }

 
   avg = sum / denovi_vo_mesec;

   
   printf("Srednata mesecna temperatura e: %.2f\n", avg);

   return 0;
}
