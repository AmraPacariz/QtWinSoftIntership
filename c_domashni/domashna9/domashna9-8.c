/*Да се најдат природните броеви чиј квадрат и куб (заедно) ги содржат сите
цифри 0,1, 2, .. , 9 по еднаш.*/

//ja kje idam na logikata deka ako edna cifra ja ima vo kvadratot ne smee da ja ima vo kubot i obratno 

#include <stdio.h>



int main()
{
    int n,flag=0;
    printf("Vnesi broj do koj kje proveruvam ");
    scanf("%d",&n);
    int n2=n*n;
    int n3=n*n*n;
    printf("kvadrat e %d kub e %d \n",n2,n3);
    int digits[10] = {0};
   
    while (n2 > 0) {
        digits[n2 % 10]++;
        n2 /= 10;
    }
     
     while (n3 > 0) {
        digits[n3 % 10]++;
        n3 /= 10;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if(digits[i] != 1)
    {       printf("Ne e ispolnet uslovot");
            flag=1;
            break;}
    }
    if (!flag)
    {
     printf("Uslovot e ispolnet");
    }
    
    return 0;
}