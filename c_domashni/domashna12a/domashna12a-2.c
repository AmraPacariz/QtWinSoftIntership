/*Напиши програм кој го превртува редоследот на битовите на целобројна unsigned вредност.
 Програмот треба да вчита вредност од корисникот и да ја повика функцијата prevtriBitovi за да се испечатат битовите 
 во обратен редослед.
 Вредностите на битовите да се испечатат и пред и после превртувањето.*/
#include <stdio.h>
#include <stdio.h>


unsigned int prevrtiBitovi(unsigned int n);
int main()
{
    unsigned int n;

    printf("Vnesi broj: ");
    scanf("%u", &n);

    printf("Brojot pred prevrtuvanje na bitovite e: %u\n", n);
    printf("Binarno: ");
    for (int i = 31; i >= 0; i--) {
        printf("%u", (n >> i) & 1);
    }
    printf("\n");

    unsigned int prevrten_broj = prevrtiBitovi(n);

    printf("Brojot po prevrtuvanje na bitovite e: %u\n", prevrten_broj);
    printf("Binarno: ");
    for (int i = 31; i >= 0; i--) {
        printf("%u", (prevrten_broj >> i) & 1);
    }
    printf("\n");

    return 0;
}

unsigned int prevrtiBitovi(unsigned int n)
{
    unsigned int broj = n; 
    unsigned int prevrten_broj = 0;
    int brojac = 8 * sizeof(n) - 1; 

    
    while (broj > 0) {
        prevrten_broj |= (broj & 1) << brojac;
        broj >>= 1;
        brojac--;
    }

    return prevrten_broj;
}
