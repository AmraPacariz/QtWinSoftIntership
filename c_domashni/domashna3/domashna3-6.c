//  Напишете програма која од стандардниот влез зема 5 букви и ги испечатува
//  по следниот редослед: прво петтата, па третата, па втората, па првата, па четвртата буква.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char b1,b2,b3,b4,b5;
   printf("Vnesi 5 bukvi:");
   scanf("%c %c %c %c %c",&b1,&b2,&b3,&b4,&b5);
   printf("%c %c %c %c %c ",b5,b3,b2,b1,b4);
    return 0;
}