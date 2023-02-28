/*Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе -1.*/
#include <stdio.h>
 
int main()
{
  int suma=0;
  int broj;
  printf("Vnesuvaj broevi za sobiranje.\n");
  printf("Vnesi -1 za da prekines so vnesuvanje \n");
  while (1)
  {
   scanf("%d",&broj);
   if (broj == -1)
   {
     break;
   }
   suma+=broj;
  }
  printf("Sumata na broevite e : %d",suma);
 
} 