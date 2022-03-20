#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  int yas;

   setlocale(LC_ALL,"Turkish");

   printf("Yaþýnýzý Giriniz...\n");
   scanf("%d",&yas);

   printf("Doðum tarihiniz %d\n", 2021-yas);






    return 0;
}
