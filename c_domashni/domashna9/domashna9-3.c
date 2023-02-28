/*3.	Да се најде спротивен број на природниот број n.
 (Тоа е природниот број што ги има истите цифри со n, напишани во спротивен редослед.)*/
#include <stdio.h>

int main()
{
    int n, reversed_n = 0;

    
    printf("Vnesi go prirodniot broj n : ");
    scanf("%d", &n);
    int duplikat;
    duplikat=n;
    
    while (n != 0)
    {
        
        reversed_n = reversed_n * 10 + ( n % 10);
        n /= 10;
    }

   
    printf("Sprotivna vrednost %d e  %d\n", duplikat, reversed_n);

    return 0;
}