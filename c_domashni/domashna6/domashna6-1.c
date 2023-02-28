/* 1.	Напиши програм кој конвертира целобројни фарантхајтови температури од 0-212 степени во децимални цезлиусови температури со 
3 цифри прецизност. Да се користи формулата:
celsius = 5.0 /9.0 * (fahrenheit - 32).
Излезот да се испечати во две десно порамнети колони од по 10 карактери, а целзиусовите вредности треба да се предводени од знак и за позитивни и за негативни вредности.
 */
#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    printf("%10s %10s\n", "Fahrenheit", "Celsius");

    for(fahrenheit = 0; fahrenheit <= 212; fahrenheit++) {
        celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
        printf("%10d %10+.3f\n", fahrenheit, celsius);
    }

    return 0;
}