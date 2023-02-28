/*Напиши програма која на функцијата vreme и доделува три целобројни аргументи, час, минута и секунда и како резултат го
 враќа бројот на секунди до 12 часот.
 Имено, ако е 11 часот 59 минути и 58 секунди, тогаш има уште 2 секунди до 12 часот.*/
#include <stdio.h>
#include <stdlib.h>

int do12(int saat,int min,int sek);
 


int main()
{
   int saat,min,sek;
   printf("Vnesi saat,minuta i sekunda: ");
   scanf("%d %d %d",&saat,&min,&sek);
   printf("\n");
   printf("Uste %d sekundi  \n",do12(saat,min,sek));

   return 0; 
 
} 
 int do12(int saat,int min,int sek)
 { int presmetka=saat*60*60+min*60+sek;
  int rez;
  if (saat >= 12){
   int vkupno=24*60*60;//vukpno sek vo denot 
   rez=vkupno-presmetka;
  }
  else
  {
  int vkupno=12*60*60;//vukpno sek vo denot 
   rez=vkupno-presmetka;
  }
  return rez;
 }
 