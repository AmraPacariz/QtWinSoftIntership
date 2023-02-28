
/*Напиши програма која за внесен цел број кој може да е најмногу  четири цифрен го испечатува неговиот еквивалент во римски броеви.*/
#include <stdio.h> 

int main() 
{   
    int n;

    printf("Vnesi broj megju 1-9999\n");
    scanf("%d", &n);
    
    if(n < 1 || n > 9999) {
        printf("nevaliden broj\n");
        return 0;
    }
    printf("Rimski ekvivalent na %d e : ", n);        

    while(n != 0)
    {
        if (n >= 1000)      
        {
           printf("M");
           n -= 1000;
        }
        else if (n >= 900)  
        {
           printf("CM");
           n -= 900;
        }        
        else if (n >= 500)
        {           
           printf("D");
           n -= 500;
        }
        else if (n >= 400)
        {
           printf("CD");
           n -= 400;
        }
        else if (n >= 100)
        {
           printf("C");
           n -= 100;                       
        }
        else if (n >= 90) 
        {
           printf("XC");
           n -= 90;                                              
        }
        else if (n >= 50)
        {
           printf("L");
           n -= 50;                                                                     
        }
        else if (n >= 40)
        {
           printf("XL");           
           n -= 40;
        }
        else if (n >= 10)
        {
           printf("X");
           n -= 10;           
        }
        else if (n >= 9)
        {
           printf("IX");
           n -= 9;                         
        }
        else if (n >= 5)
        {
           printf("V");
           n -= 5;                                     
        }
        else if (n >= 4)
        {
           printf("IV");
           n -= 4;                                                            
        }
        else if (n >= 1)
        {
           printf("I");
           n -= 1;                                                                                   
        }

    }

    return 0;
}