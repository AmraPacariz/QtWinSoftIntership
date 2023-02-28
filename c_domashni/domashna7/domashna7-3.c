/*Напиши програма која на функцијата obratno и доделува цел број. 
Оваа функција го враќа бројот напишан со обратни цифри, т.е. ако сме ја повикале функцијата со параметарот 1243, треба да врати 3421.*/
#include <stdio.h>

int obratno(int broj);

int main() {
    int broj, obraten_broj;
    
  
    printf("Vnesi cel broj: ");
    scanf("%d", &broj);
    
    
    obraten_broj = obratno(broj);
    printf("Obraten broj: %d\n", obraten_broj);
    
    return 0;
}
int obratno(int broj) {
    int obraten_broj = 0;
    
    while (broj > 0) {
        int cifra = broj % 10;  
        obraten_broj = obraten_broj * 10 + cifra; 
        broj /= 10;  
    }
    
    return obraten_broj;
}
