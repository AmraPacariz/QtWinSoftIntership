/*Напиши рекурзивна верзија на функцијата за пресметување најголем заеднички делител.*/
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
   if (b == 0) {
      return a;
   } else {
      return nzd(b, a % b);
   }
}