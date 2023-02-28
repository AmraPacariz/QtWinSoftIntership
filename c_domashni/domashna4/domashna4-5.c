/*Напиши програма која за внесени десет броја, го пресметува нивниот производ.*/
#include <stdio.h>
 
int main()
{
    int counter=0;
    int total=1,broj;
    printf("Vnesi 10 broja \n");
    while (counter < 10) {    
        scanf("%d",&broj);
        total*=broj;
        counter++;
        }

    printf("Proizvodot na broevite e %d",total);

   return 0; 
 
} 