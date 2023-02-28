/*Да се најде обиколката и плоштината на правилен n-аголник.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float strana, perimetar, ploshtina;
    
    printf("Vnesi go brojot na stranite: ");
    scanf("%d", &n);
    
    printf("Vnesi ja dolzinata na edna strana: ");
    scanf("%f", &strana);
    
    perimetar = n * strana;
    ploshtina = (n * strana * strana) / (4 * tan(M_PI / n));
    
    printf("Perimetarot e: %.2f\n", perimetar);
    printf("Ploshtinata e: %.2f\n", ploshtina);
    
    return 0;
}
