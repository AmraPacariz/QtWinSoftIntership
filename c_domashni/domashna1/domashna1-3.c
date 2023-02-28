/* . Напиши програм кој ги печати броевите од 1 до 4 на иста линија, при тоа можеш да користиш:
	а) една prinf наредба, без спецификатори за конверзија
	б) една prinf наредба, со 4 спецификатори за конверзија
	в) 4 printf наредби.
*/
#include <stdio.h>

int main ()
{
    int prvBroj=1,vtorBroj=2,tretBroj=3,cetvrtBroj=4;

    //bez specifikatori za konverzija
    printf("1 2 3 4 \n");
    //so specifikatori za konverzija
    printf("%d %d %d %d \n",prvBroj,vtorBroj,tretBroj,cetvrtBroj);
    //4 printef naredbi
    printf("1\t");
    printf("2\t");
    printf("3\t");
    printf("4\t");


    return 0;
}