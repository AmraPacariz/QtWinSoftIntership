/*. Напиши програм кој како влез зема два цели броја и ги споредува. Потоа го испечатува поголемиот број
 проследен со коментарот e pogolem od и 
го испечатува и помалиот број. Ако броевите се еднакви, програмот треба да испечати Broevite se ednakvi.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int broj1,broj2;
    printf("Vnesi 2 broja \n");
    scanf("%d",&broj1);
    scanf("%d",&broj2);
    if(broj1==broj2){printf("Broevite se ednakvi");}
    if(broj1>broj2){printf("Brojot %d e pogolemm od %d",broj1,broj2);}
    if(broj1<broj2){printf("Brojot %d e pogolemm od %d",broj2,broj1);}
    return 0;
}