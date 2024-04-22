#include <stdio.h>
#include <string.h>

int main(){
char st1[] = "Berkay";
char st2[] = "Icbinbp";

  strlwr(st1);     // bütün harfleri küçük yapar
  strupr(st1);     // bütün harfleri büyük yapar
  strcat(st1,st2);  // string2'yi string1'in sonuna ekler
  strncat(st1,st2,1); // string2'nin n sayıda karakterini string1'e ekler
  strcopy(st1,st2);  //string2'yi string1'e kopyalar
  strncopy(st1,st2,2);  //string2'nin n sayıda karakterini string1'e kopyalar
  strset(st1,"!");  // string1'in tüm karakterlerini belirtilen karaktere eşitler
  strnset(st1,"x",1); //string1'in n sayıda karakterini belirtilen karakterer dönüştürür
  strrev(st1);  // string1'i terse yazar

  int result = strlen(st1); //string1'in uzunluğunu int olarak döndürür 
  int result = strcmp(st1,st2); //stringlerarası karakterleri karşılaştırır
  int result = strncmp(st1,st2,2); //stringlerarası n sayıda karakteri karşılaştırır
  int result = strcmpi(st1,st2); //stringlerin karakterlerini karşılaştırır(büyük küçük fark etmez)
  int result = strnicmp(st1,st2,1); //stringlerin n sayıda karakterini karşılaştırır(büyük küçük fark etmez)

printf("%s",st1);

  if(result==0){
  printf("Stringler birbiriyle aynı");}
else{
  printf("Stringler birbiriyle farklı");
}

return 0; 
  }
