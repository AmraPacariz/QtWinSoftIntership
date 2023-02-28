/*Напиши итеративна верзија на функцијата за фибоначиеви броеви.*/
#include <stdio.h>

int fibonacci(int n);

int main() {
    int a;
    

    printf("Vnesi  broj: ");
    scanf("%d", &a);
    

   
    printf("Fibonaci na %d e %d\n",a,fibonacci(a));
    
    return 0;
}
int fibonacci(int n) {
   int i, prev1 = 0, prev2 = 1, current = 0;

   if (n == 0) {
      return prev1;
   }
   if (n == 1) {
      return prev2;
   }
   for (i = 2; i <= n; ++i) {
      current = prev1 + prev2;
      prev1 = prev2;
      prev2 = current;
   }
   return current;
}
