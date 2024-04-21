#include <stdio.h>
#include <string.h>  //boşluk bırakma muhabbeti

int main(){

char name[25];
  int age;

  printf("Adın ne ?\n");
 // scanf("%s",&name);
 fgets(name,25,stdin); //isim soyisim şeklinde yazmak için
  name[strlen(name)-1] = '\0';// outputta 2 eri arasında boşluk olmaması için
  printf("Yaşın kaç ?\n");
  scanf("%d",&age);
  printf("Merhaba %s\n",name);
  printf("%d yaşındasın\n",age);

  return 0;
}
