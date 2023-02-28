/*Секоја од n бактерии се дели на две на секои i минути, додека на секои j
минути изумираат x% од живите бактерии во тој момент. Колку бактерии ќе
има по k минути?*/
#include <stdio.h>

int main() {
    int n, i, j, x, k;
    printf("Vnesete vlezni parametri (n, i, j, x, k): ");
    scanf("%d %d %d %d %d", &n, &i, &j, &x, &k);

    int bacteria = n;
    for (int t = 1; t <= k; t++) {
        if (t % i == 0) {
            bacteria *= 2;
        }
        if (t % j == 0) {
            bacteria *= (100 - x) / 100.0;
        }
    }

    printf("Posle %d minuti ke ima %d bakterii.\n", k, bacteria);
    return 0;
}