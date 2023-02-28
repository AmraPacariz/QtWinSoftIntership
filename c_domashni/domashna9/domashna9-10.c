/*Да се најдат сите растечки поднизи во низата броеви [a i ] n . (Растечка
подниза е онаа во која секој елемент е поголем од претходниот.)*/
#include <stdio.h>

void rasteckapodniza(int array[], int n) {
    int start = 0;
    int end = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (array[i] > array[i-1]) {
            end++;
        } else {
            if (end > start) {
                int j;
                printf("Rastecka niza: ");
                for (j = start; j <= end; j++) {
                    printf("%d ", array[j]);
                }
                printf("\n");
            }
            start = i;
            end = i;
        }
    }
    if (end > start) {
        int j;
        printf("Rastecka niza: ");
        for (j = start; j <= end; j++) {
            printf("%d ", array[j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Vnesi dolzina na niza \n");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
          printf("[%d]: ",i+1);
          scanf("%d",&array[i]);
          printf("\n");
    }
      for (int i = 0; i < n; i++)
    {
          printf("%d ",array[i]);
         
    }
    printf("\n");
    rasteckapodniza(array, n);
    return 0;
}