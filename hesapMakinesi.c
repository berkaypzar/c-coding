#include <stdio.h>
int main(){

char operator;
  double sayi1,sayi2,sonuc;

  printf("Yapmak istediğiniz işlemi seçiniz : +,-,*,/ \n");
  scanf("%c",&operator);
printf("İlk sayıyı giriniz : \n");
  scanf("%lf",&sayi1);
  printf("İkinci sayıyı giriniz : \n");
  scanf("%lf",&sayi2);

  switch(operator){

    case'+':
      sonuc=sayi1+sayi2;
    printf("Sonucunuz %.2lf",sonuc );
    break;
    case'-':
      sonuc=sayi1-sayi2;
    printf("Sonucunuz %.2lf",sonuc );
    break;
    case'*':
      sonuc=sayi1*sayi2;
    printf("Sonucunuz %.2lf",sonuc );
     break;
    case'/':
      sonuc=sayi1/sayi2;
    printf("Sonucunuz %.2lf",sonuc );
     break;
    default:
    printf("Hatalı bir işlem girdiniz");
    break;
     }
  
return 0;
}
