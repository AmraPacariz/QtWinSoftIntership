// Напиши програма која внесува радиус на круг и испечатува негова плоштина и периметар. За вредност на пи да се земе 3.14.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    printf("Vnesi go radiusot na krugot:");
    scanf("%f",&radius); 
    printf("Ploshtinata na krugot e : %f \n",radius*radius*3.14);
    printf("Perimetarot na krugot e : %f \n",2*radius*3.14);
    return 0;
}