#include <stdio.h>

struct personelBilgisi {
  char isim[30];
  char cinsiyet[10];
  int yas;
  float maas;
};

int main(){

struct personelBilgisi personel1;

  strcpy(personel1.isim,"Berkay");
  strcpy(personel1.cinsiyet,"Erkek");
  personel1.yas = 21;
  personel1.maas = 89709.2;
  printf("Personelin ismi: %s\n",personel1.isim);
  printf("Personelin cinsiyeti: %s\n",personel1.cinsiyet);
  printf("Personelin yaşı: %d\n",personel1.yas);
  printf("Personelin maaşı: %.2lf\n",personel1.maas);
  printf("\n");

  struct personelBilgisi personel2 = {"Ahmet","Erkek",40,1200};
  
  
  printf("Personelin ismi: %s\n",personel2.isim);
  printf("Personelin cinsiyeti: %s\n",personel2.cinsiyet);
  printf("Personelin yaşı: %d\n",personel2.yas);
  printf("Personelin maaşı: %.2lf\n",personel2.maas);
  printf("\n");

  struct personelBilgisi personel3 = {"Ayşe","Kadın",35,1500};

  struct personelBilgisi personelKopyasi;
  personelKopyasi=personel3;

  printf("Personelin ismi: %s\n",personel3.isim);
  printf("Personelin cinsiyeti: %s\n",personel3.cinsiyet);
  printf("Personelin yaşı: %d\n",personel3.yas);
  printf("Personelin maaşı: %.2lf\n",personel3.maas);
  printf("\n");

  
  return 0;
}
