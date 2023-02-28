/*Прости броеви се броеви кои се деливи само со себе си и со бројот 1. 
Напиши програм кој внесува n елементи во низа. Да се овозможи функционалност да имаме променлив број на елементи во низата.
 Во почетокот сите елементи да се иницијализираат на 1. 
 Потоа да се напише функција prosti која секој елемент од низата чиј индекс е прост број, го поставува на 0. 
На крај од така добиената низа да се најде начин да се испечатат простите броеви до n.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int isPrime(int n);

void printPrimes(int arr[], int n);


int main() {
    int n;
    printf("Vnesi golemina na nizata: ");
    scanf("%d", &n);
    int arr[n];

    for ( int i = 0; i < n; i++)
    {
        arr[i]=1;
    }
    
    
    
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            arr[i] = 0;
        }
    }
   for (int i = 0; i < n; i++) {
        
            printf("%d ",arr[i]);
        
    }
   printf("\n");
   
   
 for (int i = 0; i < n; i++)
 {
    if (!arr[i])
    {
        printf("%d ",i);
    }
 
 }
  printf("\n");
 
    return 0;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    int limit = sqrt(n);

    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}


