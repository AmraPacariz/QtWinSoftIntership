/*Да се внесат два полинома со степени n m соодветно. Да се внесат
нивните коефициенти и да се најде нивниот збир.*/
#include <stdio.h>

int main() {
    int n, m, i, j;
   printf("Vnesi go stepenot na prviot polinom :");
   scanf("%d",&n);
   printf("\n");
   int polinomA[n+1];
   for (i = n; i >= 0; i--)
   {
    printf("Vnesi koeficient za %d stepen :",i);
    scanf("%d",&polinomA[i]);
    printf("\n");
   }
      
   printf("Vnesi go stepenot na vtoriot polinom :");
   scanf("%d",&m);
   printf("\n");
   int polinomB[m+1];
   for (i = m; i >= 0; i--)
   {
    printf("Vnesi koeficient za %d stepen :",i);
    scanf("%d",&polinomB[i]);
    printf("\n");
   }
   if (m>n)
   {
    for (int i = 0; i <=n; i++)
    {
        polinomB[i]+=polinomA[i];
    }
    
   }
   else if (m<n)
   {
     for (int i = 0; i <=m; i++)
    {
        polinomA[i]+=polinomB[i];
    }
    
   }
   else//ako m=n
   {
     for (int i = 0; i <=m; i++)
    {
        polinomA[i]+=polinomB[i];
    }
   }
   if (m>n)
   {
    for ( i = m; i >= 0 ; i--)
    {
        printf("%d", polinomB[i]);
    }
    
   }
   else
   {
     for ( i = n; i >= 0 ; i--)
    {
        printf("%d ", polinomA[i]);
    }
    
   }
   
   
    return 0;
}