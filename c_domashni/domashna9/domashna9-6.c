/*6.	Да се најдат природните броеви помали од n, чиј збир на кубовите на цифри¬те е еднаков на самиот број.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    printf("Vnesi broj : ");
    scanf("%d", &n);

    printf("Broevi pomali od %d koi go ispolnuvaat uslovot se: ", n);

   
    for (i = 1; i < n; i++)
    {
        int sum = 0;
        int num = i;
        int digit;

        
        while (num > 0)
        {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

       
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}