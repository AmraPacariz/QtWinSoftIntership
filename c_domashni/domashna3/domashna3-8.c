// Напиши 4 начини за да ја зголемиш вредноста на променливата x за 1.
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  printf("Vnesi vrednost za x:");
  scanf("%d",&x);
  x++;
  ++x;
  x=x+1;
  x+=1;
  printf(" x = %d ",x);
    return 0;
}