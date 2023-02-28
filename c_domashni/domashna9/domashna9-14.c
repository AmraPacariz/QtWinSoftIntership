/* За даден природен број n да се испечатат следниве фигури со користење на
рекурзија.
n
n-1 n

n-2 n-1 n
...
1 2 3 ... n-2 n-1 n
...
n-2 n-1 n
n-1 n
n  */
#include <stdio.h>


void printRow2(int start, int end) {
    if (start > end) {
        printf("\n"); // Печатење на нов ред
        return;
    }
    printf("%d ", start);
    printRow2(start+1, end);
}


void printPattern2(int n,int x) {
    if (n == 0) {
        return;
    }
    printPattern2(n-1,x);
    printRow2(n, x);
}

void print_figure(int n, int i) {
         if (i==1)
         {printf("%d \n",n);}
         if (i==n)
         {
           return;
         }
         
      
        for (int j = n-i; j <= n; j++) {
            printf("%d ", j);
        }
         printf("\n"); // Newline after each row
         print_figure(n, i+1);
        
    
}

int main() {
    int n;
    printf("Vnesete broj n: ");
    scanf("%d", &n);
    print_figure(n,1);
    printPattern2(n,n);
    return 0;
}