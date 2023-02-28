/*13.	Да се генерираат следниве дводимензионални полиња со m-редици и n-колони.
1	12	13			...
2	11	14			...
3	10	15			...
4	9	16			...
5	8	17			...
6	7	18	19		
*/
//ja kako sto razbrav kolonite se popoolnuvaat nadole pa nagore nadole pa nagore 
#include <stdio.h>

int main() {
int m,n;
printf("Vnesi broj na redici:");
scanf("%d",&m);
printf("\n");
printf("Vnesi broj na koloni:");
scanf("%d",&n);
printf("\n");
int matrix[m][n];
int polinja=m*n+1;
int i=1;


    for (int j = 0; j < n; j++)
    {
        if(j==0 || j%2==0)
        {
            for (int  k = 0; k < m; k++)
            {
                matrix[k][j]=i;
                i++;
            }
            
        }
        else if ( j==1 || j%2 == 1)
        {
           for (int k = m-1; k >= 0; k--)
            {
                matrix[k][j]=i;
                i++;
            } 
        }
        
      
    }
    


   

for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }



}