#include <stdio.h>
 
int main()
{
  float proizvod,cena;
  float vkupno=0.0;
  int counter=0;
  int i;
  float dnevno[5];
  printf("Vnesi koj proizvod kolku bil prodavan denes \n");
  while(counter<5)
  {
    printf("Vnesi prizvod :");
    scanf("%d",&i);
    printf("Vnesi kolicina: ");
    scanf("%f",&dnevno[i-1]);
    printf("\n");
    ++counter;

  }

  
 counter=0;
 while(counter<5)
  {
    switch (++counter)
    {
    case 1:
        cena=50.5;
        break;
    case 2:
        cena=45.6;
        break;
    case 3:
        cena=32.8;
        break;
    case 4:
        cena=65.3;
        break;
    case 5:
        cena=20.0;
        break;
    default:
        break;
    }
  printf("Promet od %d produkt %.2f \n ",counter,(cena*dnevno[counter-1]));
  vkupno+=(cena*dnevno[counter-1]);
 
  }
 
   printf("Vkupno promet denes %.2f",vkupno);

    return 0;
}