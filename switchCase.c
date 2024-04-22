#include <stdio.h>
int main(){

 char not;
  printf("Notunuzu giriniz:");
  scanf("%s",&not);

switch(not){

  case 'A':
  printf("Mükemmel");
break;
 case 'B':
  printf("Çok iyi");
  break;
  case 'C':
  printf("İyi");
break;
  case 'D':
  printf("Geçer");
  break;
  case 'F':
  printf("Kaldı");
  break;

  default:
  printf("Geçersiz bir not girdiniz");} 

  return 0;
}
