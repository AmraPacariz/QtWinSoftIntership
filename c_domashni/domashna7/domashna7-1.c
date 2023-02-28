/* Напиши програма која внесува 10 цели броеви и и ги доделува на
функцијата paren која враќа 1 ако бројот е парен и 0 ако бројот не е парен.*/
#include <stdio.h>
#include <stdlib.h>

int paren(int x);
 


int main()
{
   int number;
   for (int i = 0; i < 10; i++)
   {
    printf("Vnesi broj #%d :",i+1);
    scanf("%d",&number);
    printf(" %d",paren(number));
    printf("\n");
   }
   
   
   return 0; 
 
} 
 int paren(int x)
 {
    int n=x%2;
    if(n==1)
       return 0;
    else
       return 1;
 }
 
