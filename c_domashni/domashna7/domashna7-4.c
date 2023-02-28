/*Напиши програма во која дефинираш функција nzd за пресметување на најголемиот заеднички делител на два броја.*/
#include <stdio.h>

int nzd(int a, int b);

int main() {
    int a, b;
    

    printf("Vnesi dva broja: ");
    scanf("%d %d", &a, &b);
    

   
    printf("Najgolemiot zaednicki delitel e: %d\n",nzd(a, b));
    
    return 0;
}
int nzd(int a, int b) {
    int r;
    //ovoj e nekoj euklidov algoritam sto go najdov sto e poefikasen od standardniot koj ide so for ciklus od 1 do pomaliot broj i bara deliteli
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}