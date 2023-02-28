/*   Да се напише програма која во главната функција внесува број на редици и колони на дводимензионална матрица. 
Во функцијата vnesiMatrica внесува елементи, а преку функцијата pechatiMatrica ги печати елементите во табеларна форма.
б) Да се напишат рекурзивни верзии на двете функции.
*/
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10


void vnesiMatrica(int matrica[][MAX_COLS], int n, int m,int i,int j);
void pechatiMatrica(int matrica[][MAX_COLS], int n, int m,int i,int j);

int main() {
    int n, m;
    int matrica[MAX_ROWS][MAX_COLS];
    
    printf("Vnesi broj na redici: ");
    scanf("%d", &n);
    printf("Vnesi broj na koloni: ");
    scanf("%d", &m);
   
    vnesiMatrica(matrica, n, m, 0, 0);
    pechatiMatrica(matrica, n, m, 0, 0);
    
    return 0;
}


void vnesiMatrica(int matrica[][MAX_COLS], int n, int m, int i, int j) {
    if (i == n) {
        return;
    }
    if (j == m) {
        vnesiMatrica(matrica, n, m, i+1, 0);
        return;
    }
    printf("matrica[%d][%d] = ", i, j);
    scanf("%d", &matrica[i][j]);
    vnesiMatrica(matrica, n, m, i, j+1);
}


void pechatiMatrica(int matrica[][MAX_COLS], int n, int m, int i, int j) {
    if (i == n) {
        return;
    }
    if (j == m) {
        printf("\n");
        pechatiMatrica(matrica, n, m, i+1, 0);
        return;
    }
    printf("%d ", matrica[i][j]);
    pechatiMatrica(matrica, n, m, i, j+1);
}
