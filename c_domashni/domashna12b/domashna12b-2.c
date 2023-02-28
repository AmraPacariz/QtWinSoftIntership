/*Amra Pacariz
. Да се напише програма во c која служи како генератор на телефонски броеви. 
Знаеме дека полесно се паметат поими од броеви, па така некои од компаниите имаат телефонски броеви кои ја означуваат
 дејноста или името на компанијата.
Нека ни се подредени буквите на следниот начин:
Цифра	Буква
2	ABC
3	DEF
4	GHI
5	JKL
6	MNO
7	PQR
8	STU
9	VWX
0	YZ
а) За даден седумбуквен стринг да се изгенерира бројот на телефон. Пример: “TELEKOM” = 8353566
б) За даден седмоцифрен број да се изгенерираат што поголем број на стрингови. Да се внимава дека 0 има само две букви.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int vratiBroj(char bukva);
int main()
{
    char ime[8];
    int broj=0;
    printf("Vnesi ime :");
    
    
    scanf("%s",ime);
    if(strlen(ime) != 7)
    {
        printf("Mora da vneseteime od 7 bukvi\n");
        exit(1);
    }

    for ( int i = 0; i < 7; i++)
    {
        ime[i]=toupper(ime[i]);
        
    }
     for ( int i = 0; i < 7; i++)
    {
        broj=broj*10+vratiBroj(ime[i]);
        
    }
    printf("%d",broj);
 return 0;
}
int vratiBroj(char bukva)
{int broj;
switch (bukva)
{
case 'A':
case 'B':
case 'C':
    broj=2;
    break;
case 'D':
case 'E':
case 'F':
    broj=3;
    break;     
case 'G':
case 'H':
case 'I':
    broj=4;
    break;
case 'J':
case 'K':
case 'L':
    broj=5;
    break;  
case 'M':
case 'N':
case 'O':
    broj=6;
    break;
case 'P':
case 'Q':
case 'R':
    broj=7;  
    break;  
case 'S':
case 'T':
case 'U':
    broj=8;
    break;
case 'V':
case 'W':
case 'X':
    broj=9;    
    break;
case 'Y':
case 'Z':
    broj=0; 
    break;     


}
return broj;
}