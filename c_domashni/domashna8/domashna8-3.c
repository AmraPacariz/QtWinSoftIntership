/* Палиндроми се низи од букви што се читаат исто и оддесно на лево и одлево на десно. На пример зборот “radar”e palindrom.
 Да се напише програм во кој внесуваме низа од карактери. 
Треба да имаме функција palindrom која враќа вредност 1 ако стринготe palindrom или 0 инаку*/
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str);

int main() {
    char str[100];
    printf("Vnesi zbor: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("Zborot %s e palindrom\n", str);
    } else {
        printf("Zborot %s ne e palindrom\n", str);
    }

    return 0;
}

int isPalindrome(char *str) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }

    return 1;
}
