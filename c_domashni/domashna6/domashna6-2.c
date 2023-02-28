/*2.	Напиши програма која вчитува датуми во облик gg/mm/dd, 
gg-mm-dd и gg+mm+dd и ги испечаува така да наместо бројот на месецот се испечати имато на месецот.*/
#include <stdio.h>
#include <string.h>

int main() {

    int godina, mesec, den;

    printf("Vnesi datum: ");
    scanf("%d%*c%d%*c%d", &godina, &mesec, &den);

   switch (mesec)
    {
    case 1:
         printf("Vneseniot datum e %d januari %d godina", den,godina);

        break;
    case 2:
           printf("Vneseniot datum e %d februari %d godina", den,godina);

        break;
    case 3:
           printf("Vneseniot datum e %d mart %d godina", den,godina);

        break;
    case 4:
           printf("Vneseniot datum e %d april %d godina", den,godina);

        break;
    case 5:
           printf("Vneseniot datum e %d maj %d godina", den,godina);

        break;
    case 6:
            printf("Vneseniot datum e %d juni %d godina", den,godina);

        break;
    case 7:
           printf("Vneseniot datum e %d juli %d godina", den,godina);

        break;
    case 8:
            printf("Vneseniot datum e %d avgust %d godina", den,godina);

        break;
    case 9:
            printf("Vneseniot datum e %d septemvri %d godina", den,godina);

        break;
    case 10:
            printf("Vneseniot datum e %d oktomvri %d godina", den,godina);

        break;
    case 11:
            printf("Vneseniot datum e %d noemvri %d godina", den,godina);

        break;
    case 12:
           printf("Vneseniot datum e %d dekemvri %d godina", den,godina);

        break;
   
    default:
        break;
    }
   

    return 0;
}