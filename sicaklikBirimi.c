#include <stdio.h>
#include <ctype.h>
int main(){


char birim;
float temp;

printf("Sıcaklık birimini giriniz (F) veya (C) : \n");
  scanf("%c",&birim);
birim=toupper(birim);
if(birim=='C'){

printf("Celcius cinsinden sıcaklık değerini giriniz :\n");
  scanf("%f",&temp);
temp=(temp*1.8)+32;
  printf("Sıcaklık fahrenheit cinsinden %.1f derece\n",temp);
  }
  else if(birim=='F'){

  printf("Fahrenheit cinsinden sıcaklık değerini giriniz : \n");
    scanf("%f",&temp);
  temp=((temp-32)*5) /9;
    printf("Sıcaklık celcius cinsinden %.1f derece \n",temp);
}
else {
  printf("%c geçerli bir birim değil.",birim);
}
    return 0;
}
