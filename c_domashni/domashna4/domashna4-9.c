/*Една голема хемиска компанија ги плаќа своите продавачи делумно и на процент. Продавачите земаат плата од 200 евра плус 9% од
 вкупната нивна продажба за тој месец. На пример, ако некој продавач продал роба вредна 5000 евра, тогаш добива 200 евра плус 9% од 5000, 
значи вкупно 650 евра. Напиши програма која за внесен месечен промет му ја пресметува платата на вработениот. Пример:*/
#include <stdio.h>
 
int main()
{
   float promet;
   float procent;

   while (1)
   {
    printf("Vnesi promet vo evra (-1 za kraj):");
    scanf("%f",&promet);
    if (promet == -1.0)
    {
        break;
    }
    procent=(promet/100)*9;
    printf("Platata e: %.2f evra \n",200+procent);
   }
   
 
 
   return 0; 
 
} 