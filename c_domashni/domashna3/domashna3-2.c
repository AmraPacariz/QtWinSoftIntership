/*Напиши програм кој вчитува два цели броја и одредува дали се парни или непарни.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj1,broj2;
    printf("Vnesi 2 broja \n");
    scanf("%d",&broj1);
    scanf("%d",&broj2);
 ///ne koristam else bidejki toa e vo slednoto predavanje
    if(broj1 % 2 == 0 )
    {
        printf("Brojot %d e paren \n",broj1);
    }
       if(broj1 % 2 != 0 )
    {
        printf("Brojot %d e neparen \n",broj1);
    }
      if(broj2 % 2 == 0 )
    {
        printf("Brojot %d e paren \n",broj2);
    }
       if(broj2 % 2 != 0 )
    {
        printf("Brojot %d e neparen \n",broj2);
    }
    return 0;
}