/*Напиши програма која пресметува сума на внесени броеви од тастатура се додека не се внесе карактер ‘n’.*/
#include <stdio.h>
 
int main()
{
    int suma=0;
    int broj;
    char bukva='d';

   
  
    while( bukva != 'n')
    {
        printf("Vnesi broj: ");
        scanf("%d", &broj);
        suma += broj;
        printf("Ushte? (d/n):");
        scanf(" %c", &bukva);
        printf("\n");
    } 

    printf("Sumata e %d", suma);

    return 0;
}