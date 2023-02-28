/*Да се најдат сите пилести поднизи во низата броеви [a i ] n .
(Пилеста подниза е онаа во која претходниот и следниот
елемент на секој елемент се помали (поголеми) од него.)*/
#include <stdio.h>

void printSawtoothSubarrays(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])
        {
            int j = i + 2;
            while (j < n - 1 && arr[j] > arr[j + 1])
                j++;
            printf("Pilesta podniza %d: [", ++count);
            for (int k = i; k <= j; k++)
                printf("%d, ", arr[k]);
            printf("\b\b]\n");
            i = j - 1;
        }
    }
    if (count == 0)
        printf("Nema pilesta podniza\n");
}

int main()
{
    int n;
    printf("Vnesi dolzina na niza ");
    scanf("%d", &n);
    int arr[n];
    printf("vnesi gi elementite na nizata\n");
    for (int i = 0; i < n; i++)
    {
          printf("[%d]: ",i+1);
          scanf("%d",&arr[i]);
          printf("\n");
    }
      for (int i = 0; i < n; i++)
    {
          printf("%d ",arr[i]);
         
    }
    printf("\n");
    printSawtoothSubarrays(arr, n);
    return 0;
}