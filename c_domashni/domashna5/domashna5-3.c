/* Да се напише програма која ќе пресметува Питагорини броеви до 100. Тоа се броеви кои го исполнуваат следниот услов a2+b2=c2.*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Pitagorini broevi:\n");

    for(a = 1; a <= 100; a++) {
        for(b = a; b <= 100; b++) {
            for(c = b; c <= 100; c++) {
                if(a*a + b*b == c*c) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}