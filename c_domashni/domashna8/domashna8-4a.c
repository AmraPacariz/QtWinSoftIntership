/*   Да се напише програма која во главната функција внесува број на редици и колони на дводимензионална матрица. 
Во функцијата vnesiMatrica внесува елементи, а преку функцијата pechatiMatrica ги печати елементите во табеларна форма.
а) Да се напишат итеративни верзии на двете функции.
*/
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10

void vnesiMatrica(int matrica[][MAX_COLS], int n, int m);
void pechatiMatrica(int matrica[][MAX_COLS], int n, int m);

int main() {
    int n, m;
    int matrica[MAX_ROWS][MAX_COLS];
    
    printf("Vnesi broj na redici: ");
    scanf("%d", &n);
    printf("Vnesi broj na koloni: ");
    scanf("%d", &m);
   
    vnesiMatrica(matrica, n, m);
    pechatiMatrica(matrica, n, m);
    
    return 0;
}


void vnesiMatrica(int matrica[][MAX_COLS], int n, int m) {
    printf("Vnesi gi elementite na matricata (%d x %d):\n", n, m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matrica[%d][%d] = ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }
}

void pechatiMatrica(int matrica[][MAX_COLS], int n, int m) {
    printf("Matrica(%d x %d):\n", n, m);
    
    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < m; j++) {
           printf("%d ",matrica[i][j]);
        }
        printf("\n");
    }
}