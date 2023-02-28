/*Напиши програм кој вчитува три цели броја и пресметува нивна целобројна средна вредност, сума и производ.*/
#include <stdio.h>


int main()
{
    int prvBroj,vtorBroj,tretBroj;
    printf("Vnesi go prviot broj : ");
    scanf("%d",&prvBroj);
    printf("Vnesi go vtoriot broj : ");
    scanf("%d",&vtorBroj);
    printf("Vnesi go tretiot broj : ");
    scanf("%d",&tretBroj);
    printf("Sredna vrednost e : %d \n",(prvBroj+vtorBroj+tretBroj)/3);
    printf("Sumata e : %d \n",prvBroj+vtorBroj+tretBroj);
    printf("Proizvod e : %d ",prvBroj*vtorBroj*tretBroj);
    return 0;
}