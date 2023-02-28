// Напиши програм кој внесува 4 цели броја и ја испечатува нивната сума.
#include<stdio.h>
#include <stdlib.h>


int main()
{

    int prvBroj,vtorBroj,tretBroj,cetvrtBroj;
    int suma;
    printf("Vnesi go prviot broj : ");
    scanf("%d",&prvBroj);
    printf("Vnesi go vtoriot broj : ");
    scanf("%d",&vtorBroj);
    printf("Vnesi go tretiot broj : ");
    scanf("%d",&tretBroj);
    printf("Vnesi go cetvrtiot broj : ");
    scanf("%d",&cetvrtBroj);
    suma=prvBroj+vtorBroj+tretBroj+cetvrtBroj;
    printf("Sumata e : %d ",suma);
    return 0;
}