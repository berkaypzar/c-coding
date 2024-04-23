#include <stdio.h>

enum Seviyeler{
DUSUK,           //eğer hiçbir değer atamazsak sırayla 0,1,2,3...... diye gider
ORTA,         //eğer sadece birine değer atarsak birer birer artacak veya azalacak şekilde ilerler(DUSUK =12 dersek orta 13,yüksek 14 olur)
YUKSEK};       // eğer 2 veya daha fazla şeye aynı değeri atarsak error vermez o sayılar çıktı olur


int main(){

enum Seviyeler odaSicakligi = DUSUK;
  
printf("%d",odaSicakligi);

  return 0;
}

