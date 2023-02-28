/*Напиши програм кој внесува петцифрен број, ги распределува сите цифри на бројот во посебни променливи и
 ги печати секоја од цифрите со растојание една од друга од три празни места.*/

 #include <stdio.h>

 int main()
 {
  int broj,prCif,vtCif,trCif,cetCif,petCif;
  printf("Vnesi eden petocifren broj:");
  scanf("%d",&broj);
    petCif=broj%10;
    broj=broj/10;
    cetCif=broj%10;
    broj=broj/10;
    trCif=broj%10;
    broj=broj/10;
    vtCif=broj%10;
    broj=broj/10;
    prCif=broj;
    printf("%d   %d   %d   %d   %d",prCif,vtCif,trCif,cetCif,petCif);



    return 0;
 }