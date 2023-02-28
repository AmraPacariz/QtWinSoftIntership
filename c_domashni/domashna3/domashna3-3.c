#include <stdio.h>
#include <stdlib.h>
// Обидете се со спецификаторот за конверзија %d да испечатите букви на следниот начин:
// printf(“%d”, ‘A’) /* karakteri se koristat vo edinecni navodnici */
// Што се случува кога се печатат следните карактери: b  c  0  1  2  $  *  +  / и празно место?

int main()
{  

    printf("%d \n", 'A' );//65
    printf("%d \n", 'b' ); //98
    printf("%d \n", 'c' ); //99
    printf("%d \n", '0' ); //48
    printf("%d \n", '1' ); //49
    printf("%d \n", '2' ); //50
    printf("%d \n", '$' ); //36
    printf("%d \n", '*' );//42
    printf("%d \n", '+' ); //43
    printf("%d \n", ' ' ); //32
 //kje ni se ispecatat ASCII vrednostite


    return 0;
}