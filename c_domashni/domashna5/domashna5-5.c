/*Напиши програм во кој контролата на циклусот на броево од 1 до 100 го прави for наредба. 
Во рамките на наредбата for треба да се испечати коментар дека бројот не е делив со три.
 Доколку бројот е делив со три, не е печати никаков коментар. Задачата да се реши со користење на наредбата continue.*/
 #include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            continue;
        }
        printf("The number %d is not divisible by 3.\n", i);
    }

    return 0;
}