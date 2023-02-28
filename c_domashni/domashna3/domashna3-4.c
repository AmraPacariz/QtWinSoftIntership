#include <stdio.h>
#include <stdlib.h>
// Во примерот p03_01.c, во наредбата printf наместо спецификаторот за конверзија  %f, поставете го спецификаторот %d. Што се случува и зошто?
float result; /* Rezultat od delenje */
int main()
{
result = 7.0 / 22.0;
printf("Rezultatot e %d \n", result);//ni pecati nekoj cel broj bidejki doagja do greska (ceka cel broj dobiva decimalen)
return (0);
}
