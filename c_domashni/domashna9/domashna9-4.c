/*Совршени броеви се тие броеви кои еднакви се на збирот од своите делители (без самиот број). 
Пример за совршен број е 28, бидејќи делителите на 28 се 1, 2, 4, 7 и 14, а збирот на овие броеви е 1+2+4+7+14=28.*/
#include <stdio.h>

int main()
{
    int n, i, j, sum;

  
    printf("Vnesi go brojot n: ");
    scanf("%d", &n);

    printf("Sovrsheni broevi pomali od  %d se:\n", n);

    
    for (i = 1; i < n; i++)
    {
        sum = 0;

     
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}