/*Да се напише програма која симулира селекциско сортирање. 
Селекциското сортирање го бара најмалиот елемент во низата и го заменува со првиот елемент. 
Сега, на прво место сигурно ни се наоѓа најмалиот елемент во низата. 
Потоа, во остатокот од низата, од вториот до n-тиот елемент, повторно го бараме новиот најмал елемент и му ја заменуваме вредноста со вториот елемент од низата итн.
 Ова сортирање има слични процесирачки капацитети како сортирање со методот на меурче.
 а) Да се напише итеративна верзија на функцијата selekcija која го врши селекциското сортирање.*/
 #include <stdio.h>

void selectionSort(int arr[], int n);

int main() {
   
    int n;
    printf("Vnesete dimenzii na nizata: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; ++i)
    {
        printf("Vnesi element vo nizata [%d]: ",i+1);
        scanf("%d", &arr[i]);
    }

   
    printf("Nizata pred sortiranje: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    selectionSort(arr, n);
    printf("Sortirana niza: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
  
    for (i = 0; i < n-1; i++) {
    
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
   
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}