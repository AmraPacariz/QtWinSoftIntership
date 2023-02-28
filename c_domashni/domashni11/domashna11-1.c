/*. Напиши програм кој внесува телефонски број како стринг во облик (333) 333-3333.
 Програмот треба со користење на наредбата strtok да го извлече кодот на државата како едно делче, 
 а потоа да го спои целиот телефонски број во друг стринг без -.
  Програмот треба да го конвертира бројот на државата во int, 
а седмоцифрениот телефонски број во long. Двата бројат треба да бидат испечатени.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char broj[20];
    char *drzava;
    int intDrzava;
    printf("Vnesi telefonski broj od oblik (333) 333-3333 ");
    gets(broj);
    printf("%s",broj);
    
    drzava=strtok(&broj[1],")");
    intDrzava=atoi(drzava);
    char *del1,*del2,*telbroj;
    del1=strtok(NULL,"-");
    int intDel1=atoi(del1);
    del2=strtok(NULL,"\0");
    int intDel2=atoi(del2);
    telbroj=strcat(del1,del2);
    long ltelbroj=atol(telbroj);
    printf("\n drzava: %d  del1:%d  del2:%d telbroj:%ld ",intDrzava,intDel1,intDel2,ltelbroj);
    return 0;
}