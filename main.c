#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  int yas;

   setlocale(LC_ALL,"Turkish");

   printf("Ya��n�z� Giriniz...\n");
   scanf("%d",&yas);

   printf("Do�um tarihiniz %d\n", 2021-yas);






    return 0;
}
