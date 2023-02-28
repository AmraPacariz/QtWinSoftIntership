/*Да се најдат природните броеви во интервалот [n 1 ,n 2 ], кои се деливи со
својот спротивен број.*/
#include <stdio.h>


int reverse(int num)
{
    int rev = 0;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    return rev;
}

int main()
{
    int n1, n2, i;

    printf("Vnesi go pocetokot na intervalot: ");
    scanf("%d", &n1);
    printf("Vnesi go krajot na intervalot: ");
    scanf("%d", &n2);

    printf("broevite vo intervalot [%d,%d] koi se delivi so svojot sprotiven broj se :\n", n1, n2);

    for (i = n1; i <= n2; i++)
    {
        int rev = reverse(i);

        if (i % rev == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}