#include <stdio.h>
#include <string.h>

union Veri{

int integer;
double d;
char c[20];
};

int main(){

  //union veri yapısı sadece bir değişkeni tutabiliyor
union Veri veri;

 veri.integer = 10;
  veri.d= 12;
  strcpy(veri.c,"Berkay");

  printf("Verinin büyüklüğü : %d\n",sizeof(veri));
  printf("veri.i : %d\n",veri.integer);
  printf("veri.d : %lf\n",veri.d);
  printf("veri.c : %s\n",veri.c);
  printf("\n");
//en son değeri verilen şey string olduğu için stringi doğru yazdırıp geri kalanları random yazdırdı
  //şimdi integer değerimizi değiştirip bakalım ne output verecek

veri.integer = 100;
  
  printf("Verinin büyüklüğü : %d\n",sizeof(veri));
  printf("veri.i : %d\n",veri.integer);
  printf("veri.d : %lf\n",veri.d);
  printf("veri.c : %s\n",veri.c);
  printf("\n");
//şimdi de en son atanan değer integer değerimiz olduğu için sadece integerı verdiğimi değer onun dışındakileri random değer olarak döndürdü

//son olarak da double değerimizi girelim ve outputa bakalım
  veri.d =201.32;

  printf("Verinin büyüklüğü : %d\n",sizeof(veri));
  printf("veri.i : %d\n",veri.integer);
  printf("veri.d : %.2lf\n",veri.d);
  printf("veri.c : %s\n",veri.c);
  printf("\n");
  //son verilen değer double d değikenimiz olduğu için sadece doubleı doğru döndürdü


  return 0;
}
